#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation
    map<string,int> m;

    //insertion
    //1
    pair<string,int> p1=make_pair("babbar",3);
    m.insert(p1);

    //2
    pair<string,int> p2("love",2);
    m.insert(p2);

    //3
    m["mera"]=2;

    //searching
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;

    //size
    cout<<m.size()<<endl;
    //presence
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    // for(auto i:m)
    //     cout<<i.first<<" "<<i.second<<endl;

    //iterator
    map<string,int> :: iterator it=m.begin();

    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}