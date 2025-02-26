#include<bits/stdc++.h>

using namespace std;

bool sort_check(vector<int> &arr){ // sorted in non-descending order
  int n =arr.size();
  bool srotedah=false;
  for ( int i=0; i<n; i++){
    if ( arr[i]>=arr[i-1]){
      srotedah=true;
    }
  }
  srotedah=false;
  return srotedah;
}

int main(){
  vector<int> arr ={3,2,1,5,2};
  vector<int> nums={1,2,3,4,3,5};
  int seclarge = sort_check(nums);

  
  cout << seclarge<<endl;
  return 0;
} 

