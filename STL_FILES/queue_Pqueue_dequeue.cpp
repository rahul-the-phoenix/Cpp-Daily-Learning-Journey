
#include <iostream>
#include<queue>        //for queue and priority queue operations
#include<dequeue>     //double side queue operations 
using namespace std;
int main() {

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
    

cout <<"================================== PRIORITY QUEUE OPERATIONS ======================================================"
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

cout <<"================================== DOUBLE SIDE  QUEUE OPERATIONS ======================================================"

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


while(!dq.empty()){
    cout<<dq.front()<<" ";  // 3 21 23 12    //print fromo front side 
    dq.pop_front();    // pop from front 
}
cout <<endl;

while(!dq2.empty()){
    cout<<dq2.back()<<" ";  // 3 21 23 12    print from backside 
    dq2.pop_back();     //  pop from back 
}
    
    return 0;
}
