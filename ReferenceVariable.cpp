#include<iostream>
using namespace std;

int &func(int n){
    int num=n;
    int& ans=num;
    return ans;
}

int *fun(int n){
    int* ptr=&n;
    return ptr;
}

void update1(int &n){
    n++;
}

void update(int n){
    n++;
}

int main(){
    // int i=5;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    int n=5;
    cout<<"before"<<n<<endl;
    update(n);
    cout<<"after"<<n<<endl;

    cout<<"before"<<n<<endl;
    update1(n);
    cout<<"after"<<n<<endl;

    func(n);
    fun(n);
}