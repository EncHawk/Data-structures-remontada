#include <iostream>

using namespace std;



void PrintT1( int n){
    for ( int i= 0; i<n; i++){
        for( int j=0; j<n-i*1; j++){
            cout << "*-";
        }
     cout<< endl;
    }
}

void PrintT2(int n){
    for ( int i =0; i <n ; i++){
        for ( int j=0; j<i+1; j++ ){
            cout<< "* ";
        }
     cout<< endl;
    }
}
 
 void PrintT3( int n){
    for ( int i= 0; i<n; i++){
        for ( int j = 0; j<n; j++){
            cout<< "*-";
        }
     cout<< endl;
    }

 }

 void PrintT4( int n){
    for ( int i= 0; i<=n; i++){
        for ( int j=1; j<=i; j++){
            cout<<j;
        }
    cout<< endl;}
 }

void PrintT5( int n){
    for ( int i = 1; i<=n; i++){
        for( int j=1; j<=i; j++){
             cout<< i << " ";
        }
     cout << endl;
    }
}

void PrintT6( int n){
    for ( int i = 1; i<=n; i++){
        for ( int j = 1; j<=i; j++){
            cout<< j << " ";
        }
     cout<<endl;
    }
}

void PrintT7(int n){
    for ( int i= 0; i<n; i++){
        //space
        for ( int j = 0; j<n-i-1; j++){
            cout<< "-";
        }
        //stars
        for ( int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for ( int j = 0; j<n-i-1; j++){
            cout<< "-";
        }
    cout<< endl;
    }
}

void PrintT8( int n){
    for ( int i = 0; i<n; i++){
    for ( int j = 0; j<n; j++){
        cout<<"-";
    }
    }
}

int main(){
 int t;
 cin>>t;
 for( int i =0; i<t; i++){
    int n; 
    cin>>n;
    PrintT8(n);
 }

    return 0;
}