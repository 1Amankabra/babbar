#include<iostream>
using namespace std;
// void update(int **p2){
//    //p2=p2+1;
//     //*p2=*p2+1;
//     **p2=**p2+1;
// }

int main(){
    // int i=5;
    // int *p=&i;
    // int **p2=&p;

    /*cout<<"sab good"<<endl;

    //cout<<"printing p ->"<<p<<endl;
    //cout<<"address p ->"<<&p<<endl;
    //cout<<*p2<<endl;

    //5 printing
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    //add of 5
    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*p2<<endl;

    //add of p
    cout<<&p<<endl;
    cout<<p2<<endl;
    */
    
    // cout<<endl<<endl;
    // cout<<"befor"<<i<<endl;
    // cout<<"befor"<<p<<endl;
    // cout<<"befor"<<p2<<endl;
    // update(p2);
    // cout<<"after"<<i<<endl;
    // cout<<"after"<<p<<endl;
    // cout<<"after"<<p2<<endl;
    
    //Qus 1:
    // int first=8;
    // int second = 18;
    // int *ptr=&second;
    // *ptr=9;
    // cout<<first<<" "<<second<<endl;


    //Qus 2:
    // int f=6;
    // int *p=&f;
    // int *q=p;
    // (*q)++;
    // cout<<f<<endl;

    //Qus 3:
    // int f=8;
    // int *p=&f;
    // cout<<(*p)++<<" ";
    // cout<<f<<endl;

    //Qus 4:
    // int *p=0;
    // int f=110;    ERROR
    // *p=f;
    // cout<<*p<<endl;

    //Qus 5:
    // int f=8;
    // int s=11;
    // int *t=&s;
    // f=*t;
    // *t=*t+2;
    // cout<<f<<" "<<s<<endl;

    //Qus 6:
    // float f=12.5;
    // float p=21.5;
    // float *ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<" "<<f<<" "<<p<<endl;


    //Qus 7:
    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

    //Qus 8:
    // int arr[]={11,21,31,41};
    // cout<<*(arr)<<" "<<*(arr+1)<<endl;

    //Qus 9:
    // int arr[6]={11,12,31};
    // cout<<arr<<" "<<&arr<<endl;

    // //Qus 10:
    // int arr[6]={11,21,31};
    // cout<<(arr+1)<<endl;

    //Qus 11:
    // int arr[6]={11,21,31,41};
    // int *p=arr;
    // cout<<p[2]<<endl;

    //Qus 12:
    // int arr[]={11,21,31,41,51};
    // cout<<*(arr)<<" "<<*(arr+3)<<endl;

    //Qus 13:
    // int arr[]={11,21,31,41};
    // int *ptr=arr++;     //ERROR
    // cout<<*ptr<<endl;

    //Qus 14:
    // char ch='a';
    // char *ptr =&ch;
    // ch++;
    // cout<<*ptr<<endl;

    //Qus 15:
    // char arr[]="abcde";
    // char *p=&arr[0];
    // cout<<p<<endl; 

    //Qus 16:
    // char arr[]="abcde";
    // char *p=&arr[0];
    // p++;
    // cout<<p<<endl; 

    //Qus 17:
    // char str[]="babbar";
    // char *p =str;
    // cout<<str[0]<<" "<<p[0]<<endl;

    //Qus 18:
    // void update(int *p){
    //     *p=(*p)*2;
    // }
    // int main(){
    //     int i=10;
    //     update(&i);
    //     cout<<i<<endl;
    

    // return 0;
    // }

    //Qus 19:
    // int f=110;
    // int *p=&f;
    // int **q=&p;
    // int s=(**q)++ + 9;
    // cout<<f<<" "<<s<<endl;

    //Qus 20:
    int f=100;
    int *p=&f;
    int **q=&p;
    int s=++(**q);
    int *r=*q;
    ++(*r);
    cout<<f<<" "<<s<<endl;
}