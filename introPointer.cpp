#include<iostream>
using namespace std;

int main(){
    // int num=5;
    // cout<<num<<endl;
    // cout<<"address of num"<<&num<<endl;

    // int *ptr=&num;
    // cout<<"value is ->"<<*ptr<<endl; 
    // cout<<"value is ->"<<ptr<<endl;

    // double d=4.55;
    // double *p2=&d;

    // cout<<"size of integer"<<sizeof(num)<<endl;
    // cout<<"size of pointer"<<sizeof(ptr)<<endl;
    // cout<<"size of double pointer"<<sizeof(p2)<<endl;

    // int *p=0;
    // cout<<*p<<endl;
    /*int i=5;
    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */

    int num=5;
//    int a=num;
//    cout<<"a befor"<<num<<endl;
//    a++;
//    cout<<"a after"<<num<<endl;  

   int *p=&num;
   cout<<"befor"<<num<<endl;
   (*p)++;
   cout<<"after"<<num<<endl;

   int *q=p;
   cout<<p<<"--"<<q<<endl;
   cout<<*p<<"--"<<*q<<endl;

   int i=3;
   int *t=&i;
   //cout<<(*t)++<<endl;
   *t=*t+1;
   cout<<"brfor t"<<t<<endl;
   t=t+1;
   cout<<"after t"<<t<<endl;
    return 0;
}