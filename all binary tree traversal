// binary tree insertion and traversal 

#include<bits/stdc++.h>
#include<queue>
using namespace std;

class tree{
    public:
    int data;
    tree* left;
    tree* right;
    tree(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

inline tree* buildTree(tree* root){
    cout<<"Enter data : ";
    int data;
    cin>>data;
    root = new tree(data);
    if(data == -1){
        return NULL;
    }
    cout<<"For left ";
    root -> left = buildTree(root -> left);
    cout<<"For right ";
    root -> right = buildTree(root -> right);
    return root;
}

inline void levelOrderTraversal(tree* root){
    queue<tree*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        tree* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            }
            else{
                cout<<temp -> data << "|     |";
                if(temp -> left){
                    q.push(temp -> left);
                }
                if(temp -> right){
                    q.push(temp -> right);
               
            }
        }
    }
}

inline void inordertraversal(tree* root){
    //base case
    if(root == NULL){
        return;
    }
    inordertraversal(root -> left);
    cout<<root -> data<<"|     |";
    inordertraversal(root -> right);
}

inline void preOrderTraversal(tree* root){
    //base case
    if(root == NULL){
        return;
    }
    cout<<root -> data <<"|      |";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}
inline void postOrderTraversal(tree* root){
    if(root == NULL){
        return ;
    }
    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout<<root -> data <<"|     |";
}

int main(){
    tree* root = NULL;
    root = buildTree(root);
    cout<<"Level order Traversal :  \n ";
    levelOrderTraversal(root);
    cout<<"Inorder traversal : "<<endl;
    inordertraversal(root);
    cout<<"\nPreorder traversal : "<<endl;
    preOrderTraversal(root);
    cout<<"\nPostorder traversal : ";
    postOrderTraversal(root);
    return 0;
}
