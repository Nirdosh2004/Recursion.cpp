#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

inline node* buildTree(node* root){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"For left ";
    root -> left = buildTree(root -> left);
    cout<<"For right ";
    root -> right = buildTree(root -> right);
    return root;
}

inline void inorderTraversal(node* root){
    if(root == NULL){
        return ;
    }
    inorderTraversal(root -> left);
    cout<<root -> data << "|       ";
    inorderTraversal(root -> right);
}

inline void preorderTraversal(node* root){
    if(root == NULL){
        return;
    }
    cout<<root -> data <<"|    ";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

inline void postorderTraversal(node* root){
    if(root == NULL){
        return ;
    }
    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout<<root -> data <<"|    ";
}

inline void levelorderTraversal(node* root){
    queue<node*> p;
    p.push(root);
    p.push(NULL);
    while(!p.empty()){
        node* temp = p.front();
        p.pop();
        if(temp == NULL){
            cout << endl;
            if(!p.empty()){
                p.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<"|    ";
            if(temp -> left){
                p.push(temp-> left);
            }
            if(temp-> right){
                p.push(temp -> right);
            }
        }
    }
}


int main(){
   
     node* root = NULL;
     root = buildTree(root);
     
    cout<<"Inorder Traversal : \n";
    inorderTraversal(root);
    cout<<endl;
    cout<<"Preorder Traversal : \n";
    preorderTraversal(root );
      cout<<endl;
    cout<<"Postorder Traversal : \n";
    postorderTraversal(root);
      cout<<endl;
    cout<<"Level Order Traversal : \n";
    levelorderTraversal(root);
    
    return 0;
}
