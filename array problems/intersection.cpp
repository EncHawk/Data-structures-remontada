#include<bits/stdc++.h>

using namespace std;
//

void interarr(vector<int> a, vector<int> b ){
  //brute
  // tc = O(n1*n2) nested loops sc = O(n2) the visited array.
  int n= a.size();
  int m= b.size();
  vector<int> vis (m,0); // b sized array with all 0's
  // vector<int> ans; 
  /*for( int i =0; i<n; i++){
    for ( int j =0; j<m ; j++){
      if ( a[i]==b[j] && vis[j]==0){
        ans.push_back(a[i]);
        vis[j]=1;
        break;
      }
      if (b[j]>a[i]) break;
    }
  }*/ 
 //OPTIMAL
 // in intersection it does not matter if either of the arrays run out because we are finding common PAIRS.
 //tc= O(min(n1,n2)) depends on the input sc = O(x) answer vector.
 vector<int> ans;
  int i=0;
  int j=0;
  while ( i<n && j<m){
    if ( a[i]<b[j]){
      i++;
    }
    else if( a[i]> b[j]){
      j++;
    }

    else {
      ans.push_back(a[i]);
      i++;
    }
  }

  for( auto it: ans){
    cout << it << " ";
  }
}


int main(){
  vector<int> arr1={1,2,3,4,5,6,7};
  vector<int> arr2={8,9,10,11,12,13,19};

  interarr(arr1, arr2);
  return 0;
}