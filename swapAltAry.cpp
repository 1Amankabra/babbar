#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlt(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){

    int even[8]={5,4,7,8,2,1,9,3};
    int odd[5]={44,65,23,78,99};

    swapAlt(even,8);
    swapAlt(odd,5);

    printArray(even,8);
    printArray(odd,5);
}