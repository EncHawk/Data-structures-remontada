#include <iostream>


using namespace std;
int add (int a, int b){ // return func.
    return a + b;
}

class calbulator {
    public :
    int multiply (int a , int b ){
        return a*b;
    
    }

};

int main (){
    int x = 5;
    int y = 10;
    int sum = add(  x, y );
    cout<<"sum of x and y is : "<< sum <<endl;
     
     calbulator calc;
     int product = calc.multiply(x, y );
     cout<<"product of x and y is : "<< product<< endl;



return 0;
} 