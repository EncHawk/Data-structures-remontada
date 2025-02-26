#include<bits/stdc++.h>

using namespace std;

int largest(vector<int> &arr){
  int n = arr.size();
  int max= arr[0];
  for ( int i=1; i<=n;i++){
    if ( arr[i]>=max){
      max=arr[i];
      }
    }
  return max;
}


int main(){
  vector<int> arr ={3,2,1,5,2};
  int max = largest(arr);
  cout << max;
  //this is a comment hahahah
  return 0;
} 


