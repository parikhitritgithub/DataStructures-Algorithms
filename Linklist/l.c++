// insert a node in initial position 

#include<bits/stdc++.h>
using namespace std ;

class Node {
    public :

    int data ;

    Node *next ;
    // constructor 
    Node (int value) {
        data = value ;
        next = NULL;

    }
 } ;

 int main () {

    Node *head ;
    head = NULL ;

    int arr[] = {1,2,3,4,5,6,7} ;

    for(int i = 0 ; i < 7 ; i++) 
    {
        if (head == NULL) 
        {
            head = new Node (arr[i]);
        }else {
            Node *temp ;
            temp = new Node (arr[i]) ;
            temp->next  = head ;
            head = temp ;
        }
    }

    // print value 


    Node *temp = head ;
    while (temp != NULL) {
        cout << temp-> data <<" " ;
        temp = temp->next ;
    }
    return 0 ; 


 }