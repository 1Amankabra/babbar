#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{

public:
    unordered_map<T,list<T>> adj;

    void addEge(T u,T v,bool direction){
        //direction=0 ->undirected
        //direction=1 ->directed

        //creation an edge from u to v
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjLidt(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ,";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the no of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"enter the no of edges"<<endl;
    cin>>m;

    graph<int> g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //creating edge
        g.addEge(u,v,0);
    }
    
    //printing graph
    g.printAdjLidt();
    return 0;
}