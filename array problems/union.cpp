#include<bits/stdc++.h>

using namespace std;

void unionarr(vector<int> a, vector<int> b ){
  /*int n1= arr1.size();
  int n2 = arr2.size();
  set<int> st;
  for ( int i=0; i<n1; i++){ //O(n1logn1)
    st.insert(arr1[i]);  
  }
  for ( int i =0; i<n2; i++){ //O(n2logn2)
    st.insert(arr2[i]);
  }
//O(n1+n2) worst case all the elements are unique.
  for( auto it: st){
    cout << it <<" ";
  }*/
 int n1= a.size();
 int n2 = b.size();
 int i=0; 
 int j=0;
 vector<int> uniarr;


  while(i<n1 && j<n2){
    if (a[i]<=b[j]){
      if(uniarr.size()==0 || uniarr.back()!=a[i]){
      uniarr.push_back(a[i]);
      i++;
      }
    }
    else {
      if(uniarr.size()==0 || uniarr.back()!=b[j]){
        uniarr.push_back(b[j]);
        j++;
        }
      }

      while (i<n1){
        if(uniarr.size()==0 || uniarr.back()!=a[i]){
          uniarr.push_back(a[i]);
          i++;
        }
      }

      while(j<n2){
        if(uniarr.size()==0 || uniarr.back()!=b[j]){
          uniarr.push_back(b[j]);
          j++;
        }
      }
    }

    for( auto it : uniarr){
      cout <<it<< " ";
    }
  }


int main(){
  vector<int> arr1={7,18,9,56,23,66};
  vector<int> arr2={7*2,1+98,9-6,5*6,2+3,6/6};

  unionarr(arr1, arr2);
  return 0;
}