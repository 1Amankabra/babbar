#include<iostream>
using namespace std;

bool binearySearch(int *arr,int s,int e,int k){
    int mid=s+(e-s)/2;
    if(s>e)
      return false;

    if(arr[mid==k])
      return true;  

    if(arr[mid]<k){
      return binearySearch(arr,mid+1,e,k);
    }
    else{
       return binearySearch(arr,s,mid-1,k);
    }       
}

int main(){

    int arr[5]={2,4,6,8,10};
    int size=5;
    int key=10;

    cout<<"present or not"<<binearySearch(arr,0,size,key);

    return 0;
}