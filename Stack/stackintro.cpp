#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    
    bool isempty(){
        if(top==-1)
            return true;
        else    
            return false;
    }
         
};


int main(){
    
    Stack st(5);
    st.push(33);
    st.push(44);
    st.push(77);

    st.pop();
    

    cout<<"stack top element"<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }


/*
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);

    cout<<"size of stack"<<s.size()<<endl;

    s.pop();
    

    cout<<"Printing top element"<<s.top()<<endl;

    if(s.empty()){
    cout<<"stack is empty"<<endl;
    }
    else
    cout<<"stack is not empty"<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    return 0;
*/
}