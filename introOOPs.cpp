#include<iostream>
#include <cstring>
using namespace std;

class hero{

    private:
    int value;
    
    public:
    char *orgname;
    char name;
    static int timeToComplete;

    hero(){
        cout<<"i am default cont."<<endl;
        orgname=new char[100];
    }

    hero(int value){
        //cout<<"this->"<<this<<endl;
        this->value=value;
    }

    hero(int value,char name){
        this->value=value;
        this->name=name;
    }
    
    hero(hero& temp){

        char *ch=new char[strlen(temp.orgname)+1];
        strcpy(ch,temp.orgname);
        this->orgname=ch;

        cout<<"copy constructor called"<<endl;
        this->value=temp.value;
        this->name=temp.name;
    }
    
    void print(){
        cout<<endl;
        cout<<"[ Orignal_name: "<<this->orgname<<",";
        cout<<"name: "<<this->name<<",";
        cout<<"value: "<<this->value<<" ]";
        cout<<endl<<endl;
    }

    int getvalue(){
        return value;
    }

    char getname(){
        return name;
    }

    void setvalue(int v){
        value=v;
    }

    void setname(char ch){
        name=ch;
    }

    void setorgname(char orgname[]){
        strcpy(this->orgname,orgname);
    }

    static int random(){
        return timeToComplete ;
    }

    ~hero(){
        cout<<"hii i am destructor"<<endl;
    }
}; 

int hero::timeToComplete=10;

int main(){

    //cout<<hero::timeToComplete<<endl;
    cout<<hero::random()<<endl;
    // hero aa;

    // hero *aaa=new hero();
    // delete aaa;
    // hero hero1;
    // hero1.setvalue(22);
    // hero1.setname('A');
    // char name1[11]="Aman kabra";
    // hero1.setorgname(name1);

    // //hero1.print();

    // hero hero2(hero1);
    // //hero2.print();

    // hero1.orgname[0]='N';
    // hero1.print();

    // hero2.print();

    // hero1=hero2;
    // hero1.print();
    // hero2.print();

    // hero r(4,'T');
    // r.print();

    // hero s(r);
    // s.print();



    //cout<<"hii"<<endl;
    //hero h(10);
    //cout<<"hello"<<endl;
    //cout<<"address is"<<&h<<endl;
    //h.getvalue();
    //h.print();


    //hero *hh=new hero(80);
    //hh->print();

    //hero temp(33,'u');
    //temp.print();

    
    // hero a;
    // a.setname('A');
    // a.setvalue(40);
    // cout<<"name is"<<a.name<<endl;
    // cout<<"value is"<<a.getvalue()<<endl;
    
    // hero *b=new hero;
    // b->setname('B');
    // b->setvalue(50);
    // cout<<"name is"<<(*b).name<<endl;
    // cout<<"value is"<<(*b).getvalue()<<endl;

    //cout<<"name is"<<b->name<<endl;
    //cout<<"value is"<<b->getvalue()<<endl;
    
      //hero h1;
   // cout<<"value is now"<<h1.getvalue()<<endl;

    // h1.setvalue(4);
    // h1.name='A';
    // //h1.value=10;

    // cout<<"name is"<<h1.name<<endl;
    // cout<<"value is"<<h1.getvalue()<<endl;
    
    // h1.print();
    // cout<<"size"<<sizeof(h1)<<endl;

    return 0;
}