// #include<iostream>
// #include<array>

// using namespace std;
// int main(){

//     int basic[3]={1,2,3};

//     array<int,4>a={1,2,3,4};

//     int size=a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }

//     cout<<"element at 2 index"<<a.at(2)<<endl;
//     cout<<"empty or not"<<a.empty()<<endl;
//     cout<<"first element"<<a.front()<<endl;
//     cout<<"last element"<<a.back()<<endl;
//     return 0;
// }



//vetor-------------
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    vector<int> v;

//    vector<int> a(5,2);

//    vector<int> last(a);
//    cout<<"print last"<<endl;
//    for(int i:last){
//     cout<<i<<" ";
//    }cout<<endl;

//    cout<<"Capacity"<<v.capacity()<<endl;
//    v.push_back(1);
//    cout<<"Capacity"<<v.capacity()<<endl;
//    v.push_back(2);
//    cout<<"Capacity"<<v.capacity()<<endl;
//    v.push_back(3);
//    cout<<"Capacity"<<v.capacity()<<endl;
//    cout<<"Size->"<<v.size()<<endl;

//    cout<<"element at 2 index"<<v.at(2)<<endl;

//    cout<<"first"<<v.front()<<endl;
//    cout<<"last"<<v.back()<<endl;

//    cout<<"befor pop"<<endl;
//    for(int i:v){
//     cout<<i<<" ";
//    } cout<<endl;

//    v.pop_back();

//     cout<<"after pop"<<endl;
//    for(int i:v){
//     cout<<i<<" ";
//    } cout<<endl;

//    cout<<"befor clear size"<<v.size()<<endl;
//    v.clear();
//    cout<<"after clear size"<<v.size()<<endl;
// }


//deque--------
// #include<iostream>
// #include<deque>

// using namespace std;
// int main(){
//     deque<int> d;

// d.push_back(1);
// d.push_front(2);

// for(int i:d){
//     cout<<i<<" ";
// }
// // d.pop_back();
// // cout<<endl;
// // for(int i:d){
// //     cout<<i<<" ";
// // }
// cout<<"print at 1 index element"<<d.at(1)<<endl;

// cout<<"first"<<d.front()<<endl;
// cout<<"last"<<d.back()<<endl;

// cout<<"empty or not"<<d.empty()<<endl;

// cout<<"befor erase"<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+1);
// cout<<"after erase"<<d.size()<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }
// }


//list--------
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     list<int> p(l);
//     list<int> n(5,100);
//     cout<<"Printing n "<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.erase(l.begin());
//     cout<<"after erase";
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"size of list"<<l.size()<<endl;

// }


//stack------
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<string> s;

//     s.push("aman");
//     s.push("kabra");
//     s.push("raghav");

//     cout<<"element "<<s.top()<<endl;
//     s.pop();
//     cout<<"element"<<s.top()<<endl;

//     cout<<"size of stack"<<s.size()<<endl;
//     cout<<"empty or not"<<s.empty()<<endl;
// }


//queue-----
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;

//     q.push("aman");
//     q.push("kabra");
//     q.push("raghav");

//     cout<<"size befor pop"<<q.size()<<endl;
//     cout<<"first element "<<q.front()<<endl;
//     q.pop();
//     cout<<"first element"<<q.front()<<endl;
//     cout<<"size befor pop"<<q.size()<<endl;
   
//     cout<<"empty or not"<<q.empty()<<endl;
// }


//priority_queue-----
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int> maxi;

//     priority_queue<int,vector<int> , greater<int> > mini;

//     maxi.push(1);
//     maxi.push(4);
//     maxi.push(3);
//     maxi.push(2);
//     cout<<"size->"<<maxi.size()<<endl;
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(1);
//     mini.push(4);
//     mini.push(3);
//     mini.push(2);
//     cout<<"size->"<<mini.size()<<endl;
//     int m=mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     cout<<"khali hai kya?"<<mini.empty()<<endl;  
// }



//set----------
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;

//     s.insert(4);
//     s.insert(4);
//     s.insert(3);
//     s.insert(5);
//     s.insert(6);
//     s.insert(4);
//     s.insert(0);
//     s.insert(6);
//     s.insert(1);
//     s.insert(9);

//     for(auto i:s){
//         cout<<i<<endl;
//     }
//     cout<<"-------------"<<endl;

// set<int>::iterator it= s.begin();
// it++;    

//     s.erase(it);
//     for(auto i:s){
//         cout<<i<<endl;
//     }cout<<endl;
    

//     cout<<"5 is present or not "<<s.count(5)<<endl;

// set<int>::iterator itr=s.find(5);

//   
// }

 
//map------
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string> m;

//     m[1]="aman";
//     m[14]="raghav";
//     m[3]="kabra";

//     m.insert({5,"bheem"});
//     cout<<"befor erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"finding 13 ->"<<m.count(13)<<endl;

//     m.erase(14);
//     cout<<"after erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl<<endl;

//     auto it=m.find(5);
//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i)first<<endl;
//     }
// } 