#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"hello everyone"<<endl;
    }

    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }

    int sayHello(char name){
        cout<<"hii"<<name<<endl;
        return 1;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output "<<value1-value2<<endl;
        cout<<"hello Aman"<<endl;
    }

    void operator() (){
        cout<<"vande matram "<<this->a<<endl;
    }
};

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};


int main(){
     
     Dog aoj;
     aoj.speak();



    // B obj1,obj2;
    // obj1.a=7;
    // obj2.a=4;

    // obj1 + obj2;
    // obj1();

//    B obj;
//    obj.a=1;  
//    obj.b=2;
//    cout<<obj.add()<<endl;
  
  
    // A a1;
    // a1.sayHello();

    return 0;
}