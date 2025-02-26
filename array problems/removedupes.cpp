#include<bits/stdc++.h>

using namespace std;


void remove_dupes(vector<int> &arr, vector<int> &uniq){
  //brute force O(n logn+ n) O(n) always worst case, here the set wouldve eaten up all the elements

  // set<int> st;
  // for( auto it: arr){
  //   st.insert(it);
  // }
  // for(auto it: st){
  //   uniq.push_back(it);
  // }

  // cout<<uniq.size()<<endl;

  //OPTIMAL two pointer approach where we see if one ptr is equal to the otr. if not take the place infront of the first ptr
  int n = arr.size();
  int i =0; 
  for( int j =1; j<=n; j++){
    if ( arr[j]!=arr[i]){
      arr[i+1]=arr[j]; // i: "take the place ahead of me"
      i++;
    }
  }

  cout<< i << endl;

}



int main(){
  vector<int> nums={1,2,3,3,4,5,5,77};
  vector<int> uniq;

  remove_dupes(nums,uniq);


  return 0;
}