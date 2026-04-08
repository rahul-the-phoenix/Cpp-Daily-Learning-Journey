
#include <iostream>
#include<queue>
#include<dequeue>
using namespace std;
int main() {
queue<int> q;

q.push(10);
q.push(20);
q.push(4);
q.push(205);
q.push(23);
q.push(57);
q.push(47);
q.push(18);

queue<int> temp = q;
while(!q.empty()){
    cout<<q.front() <<" ";
    q.pop();
}
cout<<endl <<q.size() <<" " <<temp.size() << " " <<temp.front() <<" "<< temp.back();
    


priority_queue<int> pq;

pq.push(23);
pq.push(67);
pq.push(3);

priority_queue<int> temp2 = pq;
while(!pq.empty()){
    cout<<pq.top() <<" ";
    pq.pop();
}

cout<<endl <<pq.size() <<" " <<temp2.size() << " " <<temp2.top();


deque<int> dq;
deque<int> dq2;

dq.push_front(12);  //12
dq.push_front(23);  //23 12
dq.push_front(21);  // 21 23 12
dq.push_front(3);   // 3 21 23 12


dq2.push_back(12);  //12
dq2.push_back(23);  //12 23 
dq2.push_back(21);  // 12 23 21
dq2.push_back(3);   // 12 23 21 3


while(!dq.empty()){
    cout<<dq.front()<<" ";  // 3 21 23 12
    dq.pop_front();
}
cout <<endl;

while(!dq2.empty()){
    cout<<dq2.back()<<" ";  // 3 21 23 12
    dq2.pop_back();
}
    
    return 0;
}
