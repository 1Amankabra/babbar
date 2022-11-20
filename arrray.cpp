#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<<"Array is"<<endl;
    for(int i=0;i<size;i++)
     { cout<<arr[i]<<" ";}
    cout<<"array done"<<endl; 

}

int main(){

    int number[15];

    cout<<"Value at 5 index"<<number[5]<<endl;

    cout<<"Everything is fine"<<endl;

    int second[3]={2,44,7};
    cout<<"value"<<second[2]<<endl;

    int third[20]={5,88};
    int n=20;
    printarray(third,20);
    int forth[10]={0};
    printarray(forth,10);
    return 0;
}