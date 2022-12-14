#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"speaking "<<endl;
    }
};
class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"human speaking"<<endl;
    }
};
class hybrid: public Animal,public Human{

};


int main(){
    
    hybrid h;
    cout<<h.age<<endl;
    cout<<h.weight<<endl;
    h.speak();
    h.bark();
    return 0;
}