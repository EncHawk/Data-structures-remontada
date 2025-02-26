#include <iostream>
using namespace std;


void Nat( int n){
    int  aux;
    aux =0;
    for ( int i =1; i<=n; i++){
        aux = aux + 1;
    cout << aux << endl;
    }
}

void Nsum( int n){
    int sum;
    sum =0;
    for ( int i =1; i<=n; i++){
        sum = sum+i;
        cout<< " number :"<< i <<endl;
        cout << "sum :" << sum << endl;
    }
}

void Nmul( int n){
 int mul = 1;
    for ( int i =1; i<=10; i++){
        cout << i << "x" << n << endl;
        cout << "the multiple :" << mul << endl;
        mul = mul * i;
    }
}
int main (){
    int n;
    cin>>n;
    Nmul(n);
    return 0;

}