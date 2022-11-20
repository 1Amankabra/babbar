#include<iostream>
using namespace std;


int main(){

    int a, b;

    cout<<"enter a first no"<<endl;
    cin>>a;

    cout<<"enter second no"<<endl;
    cin>>b;

    char op;
    cout<<"enter arthmatic operations"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':cout<<a+b<<endl;
        break;
    case '-':cout<<a-b<<endl;
        break;
    case '*':cout<<a*b<<endl;
        break;
    case '/':cout<<a/b<<endl;
        break;
    case '%':cout<<a%b<<endl;
        break;            
    default:cout<<"no case found"<<endl;
        break;
    }
}