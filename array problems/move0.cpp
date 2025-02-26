#include<bits/stdc++.h>

using namespace std;

vector<int> movezeroes(vector<int> &arr){
  //brute
  int n = arr.size();
  // vector<int> temp(n);
  /*
  set<int> st;
  for( int i=0; i<n; i++){
    if ( arr[i]!=0){
      st.insert(arr[i]);
    }
  }
  int i =0;
  for ( auto it: st){
    temp[i] = it;
    i++;
    }*/
  //return temp;

  //OPTIMAL

  int i =0;
  int j =-1;
  for ( int p=0; p<n; p++){
    if ( arr[p]==0){
      j=p;
      break;
    }
  }
   if( j ==-1) cerr<< -1;

   for( int i=j+1; i<n; i++){
    if ( arr[i]!=0){
      swap(arr[j],arr[i]);
      j++;
    }
   }

  return arr;
}

int main(){
  vector<int> arr ={ 1,0,3,0,6,0,1,5,0};
  vector<int> temp = movezeroes(arr);
  for(auto it: temp){
    cout << it << "";
  }
  return 0;
}