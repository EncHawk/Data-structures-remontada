#include <iostream>

using namespace std;

void n(int i, int N){
    if ( i > N){
        return;
    }

    n( i+1,  N);

    cout<<i<< endl;
}


int main(){
    int N;
    cin>>N;
    n(1,N);


    return 0;
}