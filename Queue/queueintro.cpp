#include<iostream>
#include<queue>
using namespace std;

int main(){
   /*
    queue<int> q;

    q.push(15);
    cout<<"front element is"<<q.front()<<endl;
    q.push(77);
    cout<<"front element is"<<q.front()<<endl;
    q.push(8);

    cout<<"size of queue"<<q.size()<<endl;

    q.pop();
    cout<<"front element is"<<q.front()<<endl;
    cout<<"queue size is"<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    */

   deque<int> dq;

   dq.push_front(12);
   dq.push_back(33);
   cout<<dq.front()<<endl;
   cout<<dq.back()<<endl;

   dq.pop_front();
    cout<<dq.front()<<endl;
   cout<<dq.back()<<endl;

    dq.pop_back();
   if(dq.empty()){
    cout<<"Dqueue is empty"<<endl;
   }
   else{
    cout<<"Dqueue is space free"<<endl;
   }
    return 0;
}