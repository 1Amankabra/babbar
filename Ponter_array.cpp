#include<iostream>
using namespace std;

int main(){
    
    // int arr[10]={2,4,6};

    // cout<<"address of first location in array"<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"address of first location in array"<<&arr[0]<<endl;

    // cout<<"hii"<<*arr<<endl;
    // cout<<"hello"<<*arr+1<<endl;
    // cout<<"I"<<*(arr+1)<<endl;
    // cout<<"am"<<arr[2]<<endl;
    // cout<<"aman"<<*(arr+2)<<endl;

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<"1 st"<<sizeof(*temp)<<endl;
    // cout<<"2 nd"<<sizeof(&temp)<<endl;

    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[10]={0};
    // cout<<"->"<<&a[0]<<endl;
    // cout<<"->"<<&a<<endl;
    // cout<<"->"<<a<<endl;

    // int *p=&a[0];
    // cout<<"--"<<&p<<endl;
    // cout<<"--"<<p<<endl;
    // cout<<"--"<<*p<<endl;

    int arr[10];
//error
    //arr=arr+1;

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}