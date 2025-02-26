#include<bits/stdc++.h>

using namespace std;

int linear(vector<int> &arr, int num ){
  int n = arr.size();
  for( int i =0; i<n; i++){
    if ( arr[i]==num){
      return i;
    }
  }
  return -1;
}

int main(){
  vector<int> arr={7,18,9,56,23,66};
  int num =56;
  int result =linear(arr,num);
  cout<<"the element" << num << "was found at : " << result<<endl;
  return 0;
}