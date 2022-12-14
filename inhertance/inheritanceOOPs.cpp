#include<iostream>
using namespace std;

class Human{
    
 public:
    int age;
    int height;
    int weight;
 
 public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

class Male: private Human{

    public:
     string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    } 

    int getHeight(){
        return this->height;
    }
};

int main(){
    Male m2;
    cout<<m2.getHeight()<<endl;


    /*Male m1;
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;

    cout<<m1.color<<endl;
    m1.setWeight(20);
    cout<<m1.weight<<endl;  
    m1.sleep();
    */

    return 0;
}