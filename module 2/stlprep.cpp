#include<iostream>
#include<utility> // pairs, .....
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<algorithm> // upper and lower bound
#include<map>

// patterns it seems : https://www.instagram.com/reels/C9mmeBLyvRB/ 














using namespace std;

void explainVector(){
    vector <int> v= {1,2,3,4,5};
    //v.push_back(1);
     cout<< v[2];

     vector <int>:: iterator it= v.end();

     /*for ( auto it= v.begin(); it!=v.end();it++){
       cout<< *(it) << " ";
     
     
     }*/
    /* vector<int> v1= {10,20,30,40,50};
     auto verase= v1.erase(v1.begin()+1, v1.begin()+2);
                          || [start           end)   */
}

void explainList(){
  list<int> ls;
}


void explaindeque(){
  deque<int> dq;
  dq.push_back(1);
}

void explain_queue(){
  queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

  queue<int> q_1= q;

  while( !q_1.empty() ){
     cout << q_1.front() << " " << endl;
        q_1.pop();

  }

  cout<< "size of the queue is : " << q_1.size() << endl;
  
}

void binary_search(){ // upper and lower bound. 
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 5;

    // Perform binary search
    bool found = std::binary_search(vec.begin(), vec.end(), target);

    if (found) {
        std::cout << "Element " << target << " found in the vector." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the vector." << std::endl;
    }

    
}

void sort_algo(){
  
}


int main(){
 
 binary_search();
 
return 0; 
}