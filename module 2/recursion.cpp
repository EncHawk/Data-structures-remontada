#include <iostream>

using namespace std;

void n(int i, int N){
    if ( i > N){
        return;
    }

    n( i+1,  N);

    cout<<i<< endl;
}

void rn( int i, int N){ // N to 1 without any i+1 BS, aka BACKTRACKING.
    if ( i<1){
        return;
    }

    rn( i-1,  N); // in the main shd always use ( N,N) coz we're reducin N and printing tht itself.

    cout<<i<<endl;
}

void natsum( int i, int sum){
    if ( i<0){
        cout << sum;

        return;
    }

    natsum(i-1 , sum +i);
}

/*
int natsum( int N){
if ( n==0 ) return 0;
return n+natsum(n-1);  [ return n*fact(n-2) for factorial]
}

*/
int main(){
    int N;
    cin>>N;
    natsum(N,0);


    return 0;
}