
#include <iostream>
#include<queue>
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
    return 0;
}
