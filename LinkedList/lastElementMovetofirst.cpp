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
 Node *moveToFront(Node *head){
        if(head==NULL && head->next==NULL)
            return head;
        ListNode* prev=NULL;
        ListNode* last=head;
        
        while(last->next!=NULL){
            prev=last;
            last=last->next;
        }
        prev->next=NULL;
        last->next=head;
        head=last;
        return last;
    }

int main(){
    Node* node1 = new Node(10);
}