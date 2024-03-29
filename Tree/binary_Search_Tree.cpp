#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node (int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            //purana level complete traversal ho gya
            cout<<endl;
            if(!q.empty()){
                //queue still element 
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){

    //base case
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){

    //base case
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){

    //base case
    if(root==NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* insertIntoBST(Node* root,int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    } 

    if(d>root->data){
        //right part me insert karna h
        root->right=insertIntoBST(root->right,d);
    }
    else{
        //left part me insert karna h
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}
void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

Node* minVal(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){
    //base case
    if(root==NULL)
        return root;
    
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }

    }
    else if(root->data>val){
        //left part
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        //right part
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}
int main(){

    Node* root=NULL;

    cout<<"Enter data to create the BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    
    cout<<"Printing inorder"<<endl;
    inorder(root);

    cout<<endl<<"Printing preorder"<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder"<<endl;
    postorder(root);

    cout<<"Min value"<<minVal(root)->data<<endl;  
    cout<<endl<<"Max value"<<maxVal(root)->data<<endl;

    //delete
    root=deleteFromBST(root,10);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    
    cout<<"Printing inorder"<<endl;
    inorder(root);

    cout<<endl<<"Printing preorder"<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder"<<endl;
    postorder(root);

    cout<<"Min value"<<minVal(root)->data<<endl;  
    cout<<endl<<"Max value"<<maxVal(root)->data<<endl;
    return 0;
}