#include<iostream>
#include<string>


int main(){
std::string s;
std::cin>>s;

//precompute
int hash[26] = {0}; // char array where a is subtracted with each charecter input to get the indices for the map.
for ( int i=0; i<s.size(); i++){
    hash[s[i]-'a']++;
}

int q; 
std::cin>>q;

while(q--){
char ch;
std::cin>>ch;
    //fetch
    std::cout << hash[ch-'a']; // here the map only accepts an integer value, but c is a charecter. cpp does a cast here.
}
}