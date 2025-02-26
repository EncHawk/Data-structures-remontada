#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout <<" Enter array size:"<< endl;
    int n;
    cin>>n;
    vector <int> arr(n);    

    for ( int i=0;i<n; i++){
        cout <<" Enter array values:" << endl;
        cin>>arr[i];
    }

    //precompute

    int hash[13] = {0};
    for( int i =0;i<n; i++){
        hash[arr[i]] +1;
    }

    int q; 
    cout <<" Enter number of queries:" << endl;
    cin>>q;
    while( q--){
        int num;
        cin>>num;

        //fetch 
        cout << hash[num]<< endl;
    }
}