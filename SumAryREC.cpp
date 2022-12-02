#include<iostream>
using namespace std;

int isSum(int *arr,int size){
    if(size==0)
      return 0;
    if(size==1)
      return arr[0];
      
    int remaingPart=isSum(arr+1,size-1);
    int sum=arr[0]+remaingPart;
    return sum; 
}       


int main(){

    int arr[5]={2,4,6,8,10};
    int size=5;

    int ans = isSum(arr,size);
    
    cout<<"array sum"<<ans<<endl;
    return 0;
}