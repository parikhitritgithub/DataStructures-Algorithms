// create normal tree 
#include<iostream>
#include <queue> 
using namespace std ;
class Node {
public : 
int data ;
Node *right ;
Node *left ; 
Node (int value ) {
    data = value ;
    left = right = NULL;
}
};
int main () {
    int x , first ,second ;
    cout << "Enter the root element" ; 
    cin >> x ;
    queue<Node*> q ;
    Node*root = new Node(x) ;
    q.push(root) ;
    while(!q.empty()) {
        Node *temp = q.front() ;
        q.pop() ;
        cout << "Enter the left child  "  << temp->data << " : " ;
        cin >> first ; //left child ; if my left chid value is -1  then it's left child not exsist 
        if(first != -1 )
        {
            temp->left = new Node(first) ;
            q.push(temp->left) ;
        }
        // right side 
        cout << "Enter the right child  " << temp->data << " :" ;
        cin >> second ;
        if(second != -1 ) {
            temp->right = new Node(second) ;
            q.push(temp->right) ; 
        }
    }
}