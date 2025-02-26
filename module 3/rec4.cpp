#include<iostream>

using namespace std;

void f( int i, int arr[], int n){
    if ( i == n/2) return;

    swap(arr[i],arr[n-i-1]);

    f(i+1,arr,n);
}

bool f1(int i, string &s){
    if ( i >= s.size()/2) return true;

    if ( s[i] != s [s.size()-i-1]) return false;

    return f1(i+1,s);
}

int main(){
    string s { "madsm"};
    
    cout<< f1(0,s); // outputs 1 if true/ palindrome and 0 otherwise.

    return 0;
}





/*int main(){  // for the reversal of array. 
    int n;
    cin>>n;
    int arr[n];

    for ( int i=0; i<n; i++) cin>>arr[i];
    f(0, arr, n);
    for( int i=0; i<n; i++ ) cout<<arr[i]<<" ";
    return 0;
}*/


