#include<iostream>
using namespace std;

int facto(int n1){
    int fact=1;

    for(int i=1;i<=n1;i++){
        fact = fact * 1;
    }
    return fact;
}

int nCr(int nn,int rr){
    int num = facto(nn);
    int denom = facto(rr)*facto(nn-rr);
    return num/denom;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<"answer is"<<ans<<endl;
    
    return 0;
}