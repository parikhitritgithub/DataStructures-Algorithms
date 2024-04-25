#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

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


void printLinkedList(Node* head) {
    Node* current = head;

    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl; // Print a newline after printing all elements
}


int main() {
    Node* head = NULL;
    int arr[] = { 1, 2, 3, 4, 5 };
    head = createlinklist(arr, 0, 5);

    // delete a node at start
    if (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

     printLinkedList(head);

    return 0;
}
