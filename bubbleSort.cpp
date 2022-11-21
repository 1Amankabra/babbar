#include<iostream>
using namespace std;

void Sort(int arr[], int n)
{   
   for(int i=1;i<n;i++){
       
       for(int j=0;j<n-i;j++){
           if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]);
       }
   }
}

int main(){
    int n,arr[n];
    cout<<"enter no of element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Sort(arr,5);
    for(int j=0;j<n;j++){
        cout<<Sort<<endl;
    }
    return 0;
}