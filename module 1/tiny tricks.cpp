#include <iostream>


using namespace std;
 void Dodat(int arr [], int n ){

 arr[0] +=100;
 cout<< " Value inside function : "<< arr[0]<< endl;
 }


int main (){ // for loops ot decalre an array 
 int n =5;
 int arr[n];

 for ( int i=0;i < n; i =i+1){
  cin >> arr[i];
}

 Dodat(arr,n);
    cout<< " Value inside int main : "<< arr[0]<< endl;
    
    
    return 0;
} // output is the same, so the pass by reference in arr is seen.