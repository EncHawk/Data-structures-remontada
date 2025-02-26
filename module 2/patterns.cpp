#include <iostream>

using namespace std;

void Print1(int n){ // box
    
    for (  int i=0;i<n;i++){

        for ( int j=0; j<n;j++ ){
            cout<<"* ";

        }
    cout<<endl;
    }
}

void Print2(int n){ // right triangle
    
    for (  int i=0;i<n;i++){

        for ( int j=0; j<=i;j++ ){
            cout<<"* ";

        }
    cout<<endl;
    }
}

void Print3(int n){
    for(int i= 1; i<=n; i++){

        for (int j = 1; j<=i; j++){
            cout<< j << " ";
        }
     cout<< endl;
    }
}

void Print4(int n){
    for ( int i = 1; i <=n ; i++){
        for ( int j = 0; j <i; j++){
            cout<< i;
        }
    cout<< endl;
    }
}

void Print5(int n){
    for ( int i= 1; i<=n ; i++){ // n lines 
        for (int j =0; j<n-i+1; j++){ // 1->5, j keeps going on and on until the condition fails.
            cout << "* ";
        }
     cout << endl;
    }
}

void Print6( int n){ //numbers from 1-5 along n,n-1,n-2 pattern.

    for( int i = 1; i<=n ; i++){
        for ( int j = 1; j <=n-i+1; j++){ // when j<= only then the number itself  will print 
            cout << j;
        }
        cout << endl;

    }
}

void Print7( int n){
     for ( int i =0; i<n; i++){
        //space 
         for ( int j = 0; j<n-i-1; j++){
            cout<<"-";
         }
         // star
         for ( int j =0; j<2*i+1; j++){
            cout<< "*";
         }
         //space
         for ( int j = 0; j<n-i-1; j++){
            cout<<"-";
         }
     cout<< endl;
     }
    
}

void Print8( int n){
    for ( int i = 0; i<n; i++){
        //space
        for ( int j =0; j<i; j++){
            cout<< "-";
        }
        
        //star
        for ( int j =0 ; j<n+4-2*i; j++){
            cout<<"*";
        }
        
        //space
        for ( int j =0; j<i; j++){
            cout<< "-";
        }
    cout<< endl;
    }
}

void Print9( int n){
    Print7(n);
    Print8(n); // Theyre the same 

}

void Print10( int n){
    for ( int i =1; i<=2*n-1; i++){
         int stars = i;
        for ( int j =0; j<stars; j++ ){
             if ( i>n) stars = 2*n-i;

            
            cout<< "*"<<" ";
        }
    cout<<endl;
    }
}

void Print11( int n ){
 int start =1;
 for ( int i= 0; i<n; i++){
    if ( i%2==0) start=1;
     else start =0;
     for ( int j= 0; j<=i; j++){
        cout<< start;
        start = 1- start;
     }
 cout<< endl;
 }   
}

void Print12( int n){
    for ( int i= 1; i<=n ; i++){
        //number
        for ( int j =1; j<=i; j++){
            cout<< j;
        }
         // spaces
          for( int j= 1; j<=n*2-2*i;j++){
            cout<< "-";
          }

         // numbers

         for( int j =i; j>=1; j--){
            cout<< j;
         }
    cout<< endl;
    }
}

void Print13( int n){
    int num =1;
    for ( int i = 1; i<=n; i++){
        for ( int j= 1; j<=i; j++){
            cout<< num << " ";
            num = num+1;
        }
    cout<<endl;
    }
}

void own_test( int n){
    char letter= 'A';
    for ( int i =1; i<=n; i++){
        for ( int j= 0; j<i; j++){
            cout << letter;
            
        }
        cout<< endl;
}
}

void Print14( int n){
     for( int i=0; i<=n; i++){
        for( char ch= 'A'; ch<='A'+ i; ch++){
            cout<< ch;
        }
     cout<< endl;
     }

}
 
 void Print15( int n){
    
    for(  int i=0; i<n ; i++){
        for ( char ch = 'A'; ch<= 'A' + (n-i-1); ch++){
            cout<< ch;
        }
    cout<< endl;
    }
 }

void Print16( int n){
   
   for ( int i=0; i<n; i++){
    char Ch= 'A' + i;
    for ( int j =0; j<=i; j++){
        cout<< Ch << " ";
    }
   cout<< endl;
   }
}

void Print17( int n){
    
        for ( int i =0; i<n; i++){
        
        
        //space 
         for ( int j = 0; j<n-i-1; j++){
            cout<<"-";
         }
         // charecter
         int breakPT = (2*i+1)/2;
         char ch= 'A';
         for ( int j= 1; j<=2*i+1; j++){
            cout<< ch;
            if ( j<=breakPT ) ch++;
            else ch--;
            
         }
         //space
         for ( int j = 0; j<n-i-1; j++){
            cout<<"-";
         }
     cout<< endl;
     }
    }

void Print18( int n){

    for ( int i = 0; i<n; i++){
        for ( char ch= 'E' -i; ch<='E'; ch++){
            cout<< ch;
        }
    cout<< endl;
    }
}

void Print19( int n){
     int iniS=0;
    for ( int i= 0; i<n; i++){ // first  half, the second is the mirror image of this in the bottom.
        //stars
        for( int j= 1; j<=n-i; j++){
            cout<< "*";
        }

        // spaces
        
         for( int j=0; j<iniS; j++){
            
            cout<< "-";
            
         }

        //stars
        for( int j= 1; j<=n-i; j++){
            cout<< "*";
        }
    iniS+=2;
    cout<< endl;
    }
    iniS= 2*n-2;
    for( int i=1; i<=n; i++){
        
    //stars
     for( int j=1; j<=i;j++){
        cout<< "*";
     }
     //spaces
      for( int j= 0; j<iniS; j++){
        cout<< "-";
      }

      // stars
      for( int j=1; j<=i;j++){
        cout<< "*";
     }
    iniS -=2;
    cout<<endl;
    }
}

void Print20( int n){
    int spaces = 2*n-2;
    
    for ( int i=1; i<=2*n-1; i++){
        
        int stars= i;
        if (i>n) stars=2*n-i;
        //star
        for( int j =1; j<=stars;j++){
            cout<< "*";
        }
        //space
        for( int j =1;j<=spaces;j++){
            cout<<" ";
        }

        //stars
        for( int j =1; j<=stars;j++){
            cout<< "*";
        }
    
    cout<<endl;
    if(i<n)spaces-=2;
    else spaces+=2;
    
    }
}

void Print21( int n){
    for ( int i =0; i<n;i++){
        for( int j=0;j<n;j++){
            if( i==0||j==0||i==n-1||j==n-1) cout<<"*";
            else cout<<"-";
        }
    cout<<endl;
    }
}

void Print22( int n){
    for( int i= 0; i<2*n-1;i++){
        for( int j=0; j<2*n-1; j++){
            int top= i;
            int left =j;
            int right=(2*n-2)-j;
            int down = (2*n-2)-i;
            cout<< n-min(min(top,down),min(left,right))<< " ";

        }
    cout<<endl;
    }
}

int main(){
 int t; // test cases
 cin>>t;
 for( int i=0; i<t; i++ ){ // test cases, idk what the values really denote. ask sir irl

    int n;
    cin>>n;    
    Print11(n);
 }
 return 0;
} 



// revise properly man.
// post revision 1:
//post revision 2 :
//test1:
//test2: