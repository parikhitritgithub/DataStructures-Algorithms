// insert at the end of a linklist 
#include<bits/stdc++.h> 
using namespace std ;

class Node {
    public:
    int data ;
    Node *next ;

    // CONSTRUCTOR 
    Node (int value ) {

        data = value ;
        next = NULL ; 
    }
};

int main () {

    Node *head ;
    Node *tail ;
    head = NULL ;

    int arr[] = {1,2,3,4,5,} ;

    for(int i = 0 ; i< 5 ; i++) 
    {
        if(head == NULL) {
            head = new Node (arr[i]) ;
            tail = head ;

        }else {
               tail-> next  = new Node (arr[i]) ;
                tail = tail->next ;
            }
        }

    

    // print the value 
    Node *temp ;
    temp = head ;

     while(temp!= NULL)
     {
        cout << temp->data << " " ;
         temp = temp -> next ; 
     } 


    }
