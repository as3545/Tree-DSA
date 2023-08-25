//Code

#include<iostream>
using namespace std;
struct node{
    struct node*left;
    struct node*right;
    int d;
    node(int val){
        left=NULL;
        right=NULL;
        d=val;
    }
};

void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->d<<" ";    
    inorder(root->right);
}

int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    
    inorder(root);
return 0;

}
