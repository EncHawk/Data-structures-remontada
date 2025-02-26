#include<iostream>
#include<vector>

void ms( int arr[], int n){
  cout<< "this";
}


using namespace std;

int main(){

  int n;
  cin>>n;
  vector<int> arr(n);
  
  for ( int i=0;i<n; i++){
    cin>>arr[n];
  }
  
  ms(arr.data(), int n)
  return 0;
}