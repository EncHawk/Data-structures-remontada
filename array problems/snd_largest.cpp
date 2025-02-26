#include<bits/stdc++.h>

using namespace std;

int snd_largest(vector<int> &arr){
  //brute force TC = O(nlogn + n) sc= O
  int n= arr.size();
  /*
  sort(arr.begin(), arr.end());
  int largest=arr[n-1];
  int sec_large=INT_MIN;
  for( int i=n-2; i>=0; i--){
    if ( arr[i]!=largest && arr[i]>sec_large){
      sec_large= arr[i];
    }
  }
  return sec_large;*/

  // BETTER TC= O(2n) SC= O(1)

  int large = arr[0];
  int sec_large=INT_MIN;

  /*for ( int i=0; i<n; i++){
    if ( arr[i]>large){
      large=arr[i];
    }
  }
  for( int i=0; i<n; i++){
    if (arr[i]>sec_large && arr[i]<large){
      sec_large=arr[i];
    }
  }
  return sec_large;*/

  //OPTIMAL O(N) and sc = O(1)

  for( int i=1; i<=n; i++){
    if ( arr[i]>large ){
      sec_large=large;
      large = arr[i];
    }
  }
 return sec_large;
}

int main(){
  vector<int> arr ={3,2,1,5,2};
  int seclarge = snd_largest(arr);

  
  cout << seclarge<<" second largest" << endl;
  return 0;
} 


