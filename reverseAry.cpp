#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={1,3,88,4,06,98,44,2,80,33};
    int brr[5]={22,56,2,9,8};

    reverse(arr,10);
    reverse(brr,5);

    printArray(arr,10);
    printArray(brr,5);
}