// Pre-order , Post-order and  In-order 
#include<iostream>
using namespace std ;

class Node {
    public : 
    int data ;
    Node *left ;
    Node *right; 

    // constructor
    Node(int value) {
        data = value ;
        left = right = NULL ;
    }

};


// Preorder (NLR) 

void Preorder(Node *root) {
    if(root == NULL ) 
    return  ;


    // ROOT NODE ;
    cout << root->data ;
    // LEFT NODE ;
    Preorder(root->left) ; 
    // RIGHT NODE ;
    Preorder(root->right) ;
};

// Inorder(LNR) 
void Inorder(Node *root) {
    if(root==NULL) 
    return ; 

    // LEFT NODE 
    Inorder(root->left) ;
    // ROOT NODE 
    cout << root->data ;
    // RIGHT NODE 
    Inorder(root->right) ;
}


// Postorder(LRN)
void Postorder(Node *root) {
    if(root==NULL) 
    return ; 

    // LEFT NODE 
    Postorder(root->left) ;
    // RIGHT NODE 
    Postorder(root->right) ;
    // ROOT NODE 
    cout << root->data ;
}


// create the Binary Tree 
Node *binary () {
    int  x ; 
    cin >> x ; 
    if(x==-1) 
    return NULL ;

    Node *temp = new Node(x) ;
    cout << " Enter the left child" ;
    temp -> left = binary() ;
    cout << "Enter the right child " ;
    temp -> right = binary () ;


    return temp ;
}


int main () {
    cout << "Enter the Root Node " ;
    Node *root ;
    root = binary() ;

    // Print Preorder 
    cout << "Pre-order" ;
    Preorder(root) ;

    // Print Inorder
    cout << "Pre-order" ;
    Preorder(root) ;

    //Print Postorder 
    cout << "Pre-order" ;
    Preorder(root) ;
}



// bye bye 


