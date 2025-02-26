#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


void rotateK(vector<int> &arr, int k){
  int n= arr.size();

  //brute force tc = O()
  /*vector<int> temp(k);
  for(int i =0; i<k; i++){ // adding to temp
    temp[i]=arr[i];
  }

  for( int i=k; i<n; i++){ // shifting the places
    arr[i-k] = arr[i];
  }

  for( int i=n-k; i<n; i++){
    arr[i]= temp[i-(n-k)];
  }
  for ( auto it: arr){
    cout << it << endl;
  }*/

  //Better
  reverse(arr.begin(), arr.begin()+k);
  reverse(arr.begin()+k,arr.begin()+n);
  reverse(arr.begin(), arr.begin()+n);

  for ( auto it: arr){
    cout << it << endl;
  }

}

int main(){
  vector<int> arr ={1,2,9,3,5,7};
  int k =3;

  rotateK(arr, k);
  
  return 0;
}