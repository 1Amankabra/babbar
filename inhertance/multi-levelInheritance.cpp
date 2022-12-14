#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class Dog: public Animal{

};

class GermanShepherd: public Dog{

};

int main(){
    
    GermanShepherd d;
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.speak();
    return 0;
}