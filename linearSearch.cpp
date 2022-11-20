#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10]={1,55,3,0,-7,66,-4,8,22,78};
    cout<<"enter the element to search"<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if(found){
        cout<<"present "<<endl;
    }
    else
    cout<<"not present"<<endl;
    return 0;
}
