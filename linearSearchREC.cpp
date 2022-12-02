#include<iostream>
using namespace std;

void print(int arr[],int n){
   cout<<"size of array"<<n<<endl;

   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }cout<<endl;
}

bool linearSearch(int *arr,int size,int k){
    print(arr,size);
    if(size==0)
      return false;
    if(arr[0]==k)
      return true;
    else{
      bool remaingPart=linearSearch(arr+1,size-1,k);
        return remaingPart; 
    }       
}

int main(){

    int arr[5]={2,1,8,0,5};
    int size=5;
    int key=5;

    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl; 
    }

    return 0;
}