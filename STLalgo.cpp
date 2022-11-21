#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(11);

    cout<<"finding 6 in array ->"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound ->"<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=5;
    int b=88;

    cout<<"max->"<<max(a,b);
    cout<<"min ->"<<min(a,b);

    swap(a,b);
    cout<<"a->"<<a<<endl;

    string abcd ="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string reversed"<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

}