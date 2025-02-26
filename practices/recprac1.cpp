#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printN(  int i, int n){
    if ( i > n) return ;
    cout << " Dilip " << i << endl;
    return printN(i+1, n);
}

void oneN( int i, int n){
    if ( i>n) return;

    cout << i <<" ";
    oneN(i+1,n);
}

void None( int i, int n){
    if ( n<i) return;

    cout << n<< " ";
    None(i,n-1);
}

void sumN( int n){
    int sum;
    sum = n*(n+1)/2;
    cout<< sum;
}

void sumPARA( int n, int sum){ // sum must be 0.
    if (n<0) {
        cout << sum;
        return;
    }
    sumPARA(n-1,sum+n);
}

int sumFUNC( int n){
    if ( n==0) return 0;
    
    return n+sumFUNC(n-1);
}

int fact( int n){
    if ( n==1 || n==0) return 1;
    return n *fact(n-1);
}

// int swap2P( int l, int r, int arr[]){
//     if ( arr[l] >= arr[r]) {
//         return;
//     }

//     swap( arr[l], arr[r]);

//     return swap2P(l+1,r-1, arr);
// }

void oneP( int i, int arr[], int n){
    if (i>=n/2) return;
    swap( arr[i] , arr[n-i-1]);
    oneP(i+1, arr , n);

}

bool strpal( int i, string s){
    if ( i>= s.size()/2) return true;
    if ( s[i]!= s[s.size()-i-1]) return false;

    return strpal(i+1,s);
}

int main(){
    // int n;
    // cout << "Enter the n value " << endl;
    // cin>>n;
    // cout << fact(n) << endl;
    
    // int n; 
    // cout<<"Enter the length of the array : "<< endl;
    // cin>>n;
    // vector <int> arr(n);
    // for ( int i =0; i<n; i++){
    //     cin>>arr[i];
    // }
    // oneP(0, arr.data(), n); /* this .data() function seems quite important
    // for ( int i=0; i<n;i++) cout << arr[i]<< endl;

    string s;
    cin>>s;

    cout << strpal( 0, s); // 1 is true and 0 is false.
    return 0;
}