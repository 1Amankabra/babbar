#include<iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"Iside fun 1"<<endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"Inside fun 2"<<endl;
    }
};

class C: public A{
    public:
    void fun3(){
        cout<<"Inside fun 3"<<endl;
    }
};
int main(){
   A a1;
   a1.fun1();

   B b1;
   b1.fun1();
   b1.fun2();

   C c1;
   c1.fun1();
   c1.fun3();
}