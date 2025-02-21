#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Definition of a Node in a singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new Node
struct Node* newNode(int data);

// Function to add a Node at the end of the list
void addNode(struct Node* head, int data);

// Function to add a Node at the beginning of the list
struct Node* addNodeAtBeginning(struct Node* head, int data);

// Function to traverse the list and print the data of each Node
void traverse(struct Node* head) ;

// Function to delete a Node from the begining of the list
struct Node* deleteNode(struct Node* head);

// Function to delete a Node from the middle of the list
struct Node* deleteNodeFromMiddle(struct Node* head, int position);

// Function to delete a Node from the end of the list
struct Node* deleteNodeFromEnd(struct Node* head);

#endif // LINKEDLIST_H


