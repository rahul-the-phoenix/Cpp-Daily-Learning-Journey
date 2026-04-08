
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
    return 0;
}
