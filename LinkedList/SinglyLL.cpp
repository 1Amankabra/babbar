#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;

        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node eith data"<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPos(Node* &tail, Node* &head,int pos,int d) {
    if(pos==1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
    
}

void print(Node* &head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

void deleteNode(int pos,Node* &head){

    if(pos==1){
        Node* temp =head;
        head=head->next;
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

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

bool detectLoop(Node* head){

    if(head==NULL)
     return false;

    map<Node*,bool> visited; 

    Node* temp=head;
    while (temp!=NULL)
    {
        if(visited[temp]==true){
         cout<<"present on element"<<temp->data<<endl;
         return true;
        }
        visited[temp]==true;
        temp=temp->next; 
    }
    return false;
}

Node* floyddetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
         cout<<"present at"<<slow->data<<endl;
        return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection=floyddetectLoop(head);
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head==NULL){
        return ;
    }

    Node* startofLoop=getStartingNode(head);
    Node* temp=startofLoop;

    while(temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){
    //create
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    //print(head);
    
    //insertAtHead(head,12);
    insertAtTail(tail,12);
    //print(head);

    //insertAtHead(head,15);
    insertAtTail(tail,15);
    //print(head);

    //insertAtPos(head,3,44);
    // print(head);

    //insertAtPos(tail,head,1,33);
    // print(head);

    insertAtPos(tail,head,4,88);
    //print(head);

    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    tail->next=head->next;
    //deleteNode(3,head);
    //print(head);
    
    if(floyddetectLoop(head)!=NULL){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }

    Node* loop=getStartingNode(head);
    cout<<"loop start at"<<loop->data<<endl;
    
    removeLoop(head);
    print(head);

    // if(detectLoop(head)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    return 0;
}