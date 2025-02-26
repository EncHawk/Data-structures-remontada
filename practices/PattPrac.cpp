#include<iostream>

using namespace std;


void sq(int n){
    for ( int i=0 ; i<n; i++){
        for ( int j =0 ;j<n; j++){
            cout<<"*";
        }
        cout << endl;
    }

}

void RT( int n){
    for ( int i=1; i<=n; i++){
        for( int j= 0; j<i ; j++){
            cout<< "*"<<" ";
        }
        cout << endl;
    }
}

void numRT(int n){
    for ( int i=1; i<=n; i++){
        for ( int j=1; j<=i ;j++){
            cout << j;
        }
        cout << endl;
    }
}

void numRTi(int n){
    for ( int i=1; i<=n; i++){
        for ( int j=1; j<=i ;j++){
            cout << i;
        }
        cout << endl;
    }
}

void revNstar(int n){
    for( int i= 0; i<n; i++){
        for ( int j =0; j<n-i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
}

void revNj(int n){
    for( int i= 0; i<n; i++){
        for ( int j =1; j<=n-i;j++){
            cout<< j;
        }
        cout<< endl;
    }
}

void pyra1( int n){
    for ( int i=0; i<n; i++){
        //spaces
        for ( int j =0; j<n-i-1;j++){
            cout <<"-";
        }

        //stars 
        for ( int j =0; j<2*i+1;j++){
            cout <<"*";
        }

         //spaces
        for ( int j =0; j<n-i-1;j++){
            cout <<"-";
        }

        cout<<endl;
    }
}

void Revpyra1( int n){
    for ( int i=0; i<n; i++){
        //spaces
        for ( int j =0; j<i;j++){
            cout <<"-";
        }

        //stars 
        for ( int j =0; j<(2*n-2*i)-1;j++){
            cout <<"*";
        }

         //spaces
        for ( int j =0; j<i;j++){
            cout <<"-";
        }

        cout<<endl;
    }
}

void diamond(int n){
    //top 
    for ( int i =0; i<n; i++){
        //spaces 
        for ( int j=0; i<n-j-1; j++){
            cout<<"-";
        }//stars
        for (int j=0; j<2*i+1;j++){
            cout<<"*";
        }//spaces 
        for ( int j=0; i<n-j-1; j++){
            cout<<"-";
        }
        cout<< endl;
    }//2nd part
    for ( int i =0; i<n;i++){//spaces
        for ( int j=0; j<i;j++){
            cout<<"-";
        }//stars
        for ( int j= 0; j<(2*n-2*i)-1;j++){
            cout<<"*";
        }//spaces
        for ( int j=0; j<i;j++){
            cout<<"-";
        }
        cout<< endl;
    }
}

void IncNdDec(int n){
    for ( int i =1; i<=2*n-1; i++){
        int stars =i;
        if ( i>n) stars = 2*n-i;
        for ( int j =1; j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void OneZeroRT(int n){
    int start =1;
    
    for( int i = 0; i<n ;i++){
         if ( i%2==0) start =1;
            else start =0;
        for( int j =0; j<=i; j++){        
            cout <<start<<" ";
            start = 1-start;
        }
        cout << endl;
    }
}

void RTrevRT(int n){
    for ( int i = 1; i<=n ;i++){
        //first right triangle
        for ( int j = 1; j<=i; j++){
            cout << j;
        }

        //space
        for ( int j =0;j <2*(n-i); j++){
            cout << " ";
        }

        //second RT but it needs to be reversed.
        for ( int j =i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }
}

void numRTcont(int n){
    int num {1};

    for ( int i = 0; i<=n; i++){ // missing equals to n here.
        for ( int j =0;j<i; j++){
            cout << num <<" ";

            num +=1;
        }
        cout << endl;
    }
}

void alphaRT( int n){
    for ( int i =0; i<=n; i++){
        for ( char ch = 'A'; ch<'A'+i; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void revAlphaRT(int n){
    for( int i=0; i<=n; i++){
        for ( char ch = 'A'; ch<= 'A'+n-i-1; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void  sameAlphaRT( int n){
        for ( int i =0; i<n; i++){
            char ch = 'A'+i;
            for ( int j =0; j<=i; j++){
                cout << ch;
            }
            cout  << endl;
        }
}

void alphaGenPyra( int n){
    for ( int i=0; i<n; i++){
        //spaces
        for ( int j =0; j<n-i-1;j++){
            cout <<"-";
        }
            
        //chars
        char ch = 'A';
         int breakpoint = (2*i+1)/2;
        for ( int j =1; j<=2*i+1;j++){
            cout <<ch;
             if ( j<=breakpoint) ch++;

             else ch--;
        }

         //spaces
        for ( int j =0; j<n-i-1;j++){
            cout <<"-";
        }

        cout<<endl;
    }
}

void SpaceDiaStarSide(int n){
    
    int iniS =0;
    for ( int i =0 ; i<n; i++){
        //stars
        for ( int j =1; j<=n-i; j++){
            cout << "*";
        }

        //spaces 
        for ( int j=0; j<iniS; j++){
            cout <<" ";
        }

        //stars 
        for ( int j =1; j<=n-i; j++){
            cout << "*";
        }

        iniS +=2;
        cout<< endl;
    }


    int iniS1 = 2*n-2;
     for ( int i = 0; i< n; i++){
        //stars
        for ( int j =0; j<=i; j++){
            cout << "*";
        }

        //spaces
        for( int j =0; j<iniS1;j++){
            cout <<" ";
        }

        //stares 
        for ( int j =0; j<=i; j++){
            cout <<"*";
        }
        iniS1 -=2;
        cout << endl;
     }
}

void CharE_RT( int n){
    for ( int i =0; i<n; i++){
        for ( char ch = 'E'-i ;ch <= 'E'; ch++){
            cout <<ch<<" ";
        }
        cout << endl;
    }
}

void RT10_10( int n){
    int spaces = 2*n-2;
    for ( int i =1 ; i<=2*n-1; i++){

        int stars = i;
        if ( i>n) stars = 2*n-i;
        //stars
        for ( int j =1; j<=stars; j++){
            cout <<"*";
        }

        //spaces
        for( int j = 1; j<=spaces; j++){
            cout <<" ";
        }

        //stars
        for ( int j =1; j<=stars; j++){
            cout <<"*";
        }

        cout << endl;
        if ( i<n) spaces-=2;
            else spaces+=2;
    }
}

void boxspaces( int n ){
    for ( int i =0; i<n; i++){
        for ( int j =0; j<n; j++){
            if ( i==0 || j==0 || i == n-1 || j==n-1){
                cout << "*";
            }

            else cout <<" ";
        }
        cout << endl;
    }
}

void mat4321(int n){

    // first the matrix is subrated by n, then the new matrix is subtracted with n to get the original mat
    for ( int i =0; i<2*n-1 ; i++){
        for ( int j =0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right{(2*n-2)-j}; // last index - the j number.
            int down{(2*n-2)-i}; //// last index - the i number.

            // now to find the original mat

            cout << ( n - min( min(top,down), min( right, left))); // min gets the least value since thats what is needed. Also it takes two inputs.
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        mat4321(n);
    }

    return 0;
}

// RADHE RADHE.