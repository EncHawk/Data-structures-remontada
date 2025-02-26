/*#include <iostream>

using namespace std;

void PrintName(string name){ // void-parameterized function.
 cout << "Sup' , "<< name << endl;

}



int main(){
  string name1;
  cin >> name1;
  PrintName(name1); // no need of cout, already in func'n

 string name2;
 cin>> name2;
 PrintName(name2);


    return 0;
}*/

/*#include <iostream>

using namespace std;

int Sum ( int N1,  int N2 ){ // return function.
    int N3 = N1+N2;
   return N3; 
}

int main(){

    int num1 , num2 ;
    cin>> num1>> num2;

    int res = Sum( num1, num2);
    cout<<res;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int maks(int num1,  int num2){
 if (num1>=num2){
    return num1;
 }
 else {
    return num2;
 }
}

int main(){
  int N1, N2;
  cin >> N1 >> N2;
  
  int maximum = maks(N1, N2);
 cout << maximum;
    return 0;
}*/

/*#include <iostream>

using namespace std;

void DoThis(int num1){ // pass by value,coz the value got copied nd it sent the copy to the fucntion.

num1 += num1;
cout<< num1<< endl;
num1 += 5;
cout<< num1<< endl;
num1 += 5;
cout<< num1<< endl;

}

int main(){

    int num1 = 5;
     
     DoThis(num1);
    cout << num1; //can prove coz when the final value got printed. It was same.

    return 0;
   

}*/

/*#include <iostream>

using namespace std;

void DoThat(string &s){ // pass by reference, denoted by a & before the variable in parameter.

    s[0]= 't';
    cout<< s<< endl;
}



int main (){
 string s = "raj";
  DoThat(s);
cout << s; // here the whole variable gets pulled into the function and it gets changed as a whole. Hence the name being printed twice.
    return 0;
}*/



