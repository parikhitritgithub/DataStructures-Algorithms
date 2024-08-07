#include <bits/stdc++.h>
using namespace std ;

class Node {
    public :
    
    int data ;
    Node *next ;

    // make constructor 

    Node (int value) {
        data = value ;
        next = NULL ;

    }
} ; 


Node* createlinklist(int arr[], int start, int size) {
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = start; i < size; i++) {
        Node* newNode = new Node(arr[i]);
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    return head;
}


int main () 
{
    Node *head = NULL;
    

    int arr[] = { 1,2,3,4,5} ;

    head = createlinklist(arr,0,5) ;

    int  x = 3 ; ///insert the value ;
    int value = 30 ;

    Node *temp1 = head ;
    x-- ;
    while (x--) 
    {
        temp1 = temp1 -> next ;

    }

    Node *temp2 = new Node (value) ;
    temp2->next = temp1->next ;
    temp1->next = temp2 ;





// print the value 
     Node *temp = head ;
    while(temp) {
        cout << temp->data << " " ;
        temp = temp->next;
    }
}