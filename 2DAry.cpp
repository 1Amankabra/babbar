#include<iostream>
using namespace std;
//present element
// bool isPresent(int arr[][4],int target,int i,int j){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]==target){
//               return 1;
//             }
//         }
//     }
//     return 0;
// }

//row wise sum
void printSum(int arr[][4],int i,int j){
    cout<<"Printing sum ->"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

//colwise sum
// void printColSum(int arr[][4],int i,int j){
//     cout<<"Printing sum ->"<<endl;
//    for(int j=0;j<4;j++){
//         int sum=0;
//         for(int i=0;i<3;i++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
//     cout<<endl;
// }    

int LargestRowSum(int arr[][4],int i,int j){
    int maxi=INT_MIN;
    int rowIndex;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        } 
    }
    cout<<"maximum sum is"<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][4];
    //int arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //row wise arrangement
    cout<<"enter the array element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //column wise arrangement
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }


    cout<<"print array in 2D ->"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"element to found"<<endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr,target,3,4)){
    //     cout<<"element is present"<<endl;
    // }
    // else{
    //     cout<<"element not present"<<endl;
    // }

    printSum(arr,3,4);
    // printColSum(arr,3,4);
    int ansIndex = LargestRowSum(arr,3,4);
    cout<<"Macx row is at index"<<ansIndex<<endl;

    return 0;
}