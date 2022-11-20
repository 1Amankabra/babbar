#include<iostream>
using namespace std;

int main(){

    // int i,j,n;
    // cin>>n;
    // for(i=n;i>=1;i--){
    //     for(j=n;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }
   
   
    // int n,i,j;
    // cin>>n;
    // int count = 1;
    // i=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         cout<<count<<" ";
    //         count = count+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1; 
    // }


    // int n,i,j;
    // cin>>n;

    // i=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<"\n";
    //     i=i+1;
    // }



    // int n,i,j;
    // cin>>n;
    // int count=1;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count=count+1;
    //     }
    //     cout<<"\n";
    // }


    // int n,i,j;
    // cin>>n;
    // for (i = 1; i <=n; i++)
    // {
    //     int value=i;
    //     for(j=1;j<=i;j++){
    //         cout<<value;
    //         value=value+1;
    //     }
    //     cout<<"\n";
    // }

    // int n,i,j;
    // cin>>n;
    // i=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while (j<=i)
    //     {
    //         cout<<(i-j+1);
    //         j=j+1;
    //     }
    //     cout<<"\n";
    //     i=i+1;
    // }


    // int n,i,j;
    // cin>>n;

    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         char ch='A'+j-1;
    //         cout<<ch;
    //     }
    //     cout<<'\n';
    // }


    // int n,i,j;
    // cin>>n;
    // char start='A';
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<start;
    //         start=start+1;
    //     }
    //     cout<<'\n';
    // }


    // 
    
    // int n,i,j;
    // cin>>n;
    // char value='A';
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<value;
    //         value=value+1;
    //     }
    //     cout<<'\n';
    // }

    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     char ch='A'+n-i;
    //     for(j=1;j<=i;j++){
    //            cout<<ch;
    //            ch=ch+1;
    //     }
    //     cout<<'\n';
    // }


    // int n,i,j;
    // cin>>n;

    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n-i;j++)
    //         cout<<" ";
    //     for(j=1;j<=i;j++)
    //         cout<<"*";
    //     cout<<"\n";    
    // }
      

    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n-i;j++){
    //            cout<<"*";
    //     }
    //     cout<<'\n';
    // }

    int n,row,col;
    cin>>n;

    row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=row){
            cout<<j;
            j=j+1;
        }
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<"\n";
        row=row+1; 
          
    }
}

