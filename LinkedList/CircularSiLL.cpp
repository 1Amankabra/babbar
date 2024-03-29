#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memeory is free for node with data"<<val<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        Node* curr =tail;

        while(curr->data!=element)
          curr=curr->next;

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;  
    }
}

void deleteNode(Node* &tail,int value){

    if(tail==NULL){
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
       Node* prev=tail;
       Node* curr = prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        if(curr==prev){
            tail=NULL;
        }

        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while (tail!=temp);
    cout<<endl;
    
}

bool detectLoop(Node* head){

    if(head==NULL)
     return false;

    map<Node*,bool> visited; 

    Node* temp=head;
    while (temp!=NULL)
    {
        if(visited[temp]==true)
         return true;

        visited[temp]==true;
        temp=temp->next; 
    }
    return false;
}

int main(){
    Node* tail=NULL;

    insertNode(tail,5,3);
   // print(tail);

    insertNode(tail,3,5);
    //print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,9);
    // print(tail);

    // insertNode(tail,9,10);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    //deleteNode(tail,3);
    //print(tail);

    //deleteNode(tail,10);
    //print(tail);

    //deleteNode(tail,3);
    print(tail);
    
    if(detectLoop(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }

    return 0;
}