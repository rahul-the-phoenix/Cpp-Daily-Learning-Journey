
#include <iostream>
#include<stack>        //  for the stack operations 
#include<queue>        //   for queue and priority queue operations
#include<dequeue>     //  double side queue operations 
#include<set>      //for set operations 
using namespace std;
int main() {
cout <<"===========================================  STACK OPERATIONS ==============================================================";
stack<int> st;      //define a int stack named st
st.push(20);       //pushing in stack
st.push(10);
st.push(30);
    
cout<<st.top() << " " <<st.empty() <<" "<< st.size() << endl;  // return top=50  cheak empty or not    return size  
st.pop();    //remove the top eliment 
cout<<st.top() << " " << st.size()<< endl;  // 40  4

while(!st.empty()){      //  while not empty printing 
    cout << st.top() << " ";    // 40  30  10  20 
    st.pop();
}

    

cout <<"===========================================  QUEUE OPERATIONS =============================================================="
queue<int> q;       //  define a int type queue name q;
q.push(10);   //pushing in queue
q.push(20);
q.push(4);
q.push(205);
q.push(23);

queue<int> temp = q;  //create a another queue whwre all eliments of q is saved
while(!q.empty()){   // while not empty print 
    cout<<q.front() <<" ";   // return queue front 
    q.pop();     // remove the front 
}
cout<<endl <<q.size() <<" " <<temp.size() << " " <<temp.front() <<" "<< temp.back();    //return size  return front and back 
    

    
cout <<"================================== PRIORITY QUEUE OPERATIONS ======================================================";
priority_queue<int> pq;    // priority queue define

pq.push(23);
pq.push(67);   //push is same like normal queue 
pq.push(3);

priority_queue<int> temp2 = pq;    // copying in temp2 priority queue 
while(!pq.empty()){
    cout<<pq.top() <<" ";    //return front eliment 
    pq.pop();       // remove the front
}

cout<<endl <<pq.size() <<" " <<temp2.size() << " " <<temp2.top();   // return size    and top => returns the front


    
cout <<"================================== DOUBLE SIDE  QUEUE OPERATIONS ======================================================";

deque<int> dq;     //double ended queue
deque<int> dq2;

dq.push_front(12);  //12       pushing operations from front
dq.push_front(23);  //23 12
dq.push_front(21);  // 21 23 12
dq.push_front(3);   // 3 21 23 12


dq2.push_back(12);  //12   //pushing from back 
dq2.push_back(23);  //12 23 
dq2.push_back(21);  // 12 23 21
dq2.push_back(3);   // 12 23 21 3

cout<<dq2.size() ;        //return size 

while(!dq.empty()){
    cout<<dq.front()<<" ";  // 3 21 23 12    //print from front side 
    dq.pop_front();    // pop from front 
}
cout <<endl;

while(!dq2.empty()){
    cout<<dq2.back()<<" ";  // 3 21 23 12    print from backside 
    dq2.pop_back();     //  pop from back 
}

cout <<"================================== SET OPERATIONS ======================================================";
     set<int>s;
 s.insert(10);
 s.insert(20);
 s.insert(30);
 s.insert(0);
 s.insert(10);    //duplicates removed 
 s.insert(20);
 s.erase(50);    //erase the eliment (if not present then also no error)
 s.erase(10);   // remove 10
 
  // cout<<s.begin() <<" "<<s.end()<<endl;  //it's a error as it returns itarator not int value 
 
 for(auto it = s.begin(); it != s.end(); ){
    cout << *it <<" ";
     it= s.erase(it);    // in assending order 0 10 20 30
}

set<int> s2={1,2,3,4,5,3,2,1,0,5};
cout<< endl << s2.size() <<endl;     //return size of s2
cout<<s2.count(23)<<" "<<s2.count(2);  //return 1 if present else 0

  auto it = s2.find(4);
    if(it != s2.end()) {
        cout << "Found: " << *it << endl;
}

    return 0;
}
