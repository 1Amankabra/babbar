#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
       int val =this->data;
       if(next!=NULL){
          delete next;
          next=NULL;
       } 
       cout<<"memeory free for node with data"<<val<<endl;
    }
};

//traversing in doubly LL
void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp =new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtPos(Node* &tail,Node* &head,int pos,int d){
    if(pos==1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while (cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;
}

void deleteNode(int pos,Node* &head){

    if(pos==1){
        Node* temp =head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev =NULL; 

        int cnt=1;
        while (cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}



int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int main(){
    //Node* node1=new Node(10);
    //Node* head=node1;
    //Node* tail=node1;
    Node* head=NULL;
    Node* tail=NULL;

    print(head);

    insertAtHead(tail,head,11);
    print(head);

    insertAtHead(tail,head,34);
    print(head);

    insertAtTail(tail,head,25);
    print(head);

    insertAtPos(tail,head,3,88);
    print(head);

    insertAtPos(tail,head,5,44);
    print(head);

    deleteNode(1,head);
    print(head);
    
    deleteNode(3,head);
    print(head);
    
    //cout<<getLength(head)<<endl;
    return 0;
}