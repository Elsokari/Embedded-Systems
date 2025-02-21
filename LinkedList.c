#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// Function to create a new Node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to add a Node at the end of the list
void addNode(struct Node* head, int data) {
    struct Node* temp = newNode(data);
    if (head == NULL) {
        head = temp;
        head->next = NULL;
        return;
    }
    struct Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = temp;
    temp->next = NULL;
}

// Function to add a Node at the beginning of the list
struct Node* addNodeAtBeginning(struct Node* head, int data) {
    struct Node* temp = newNode(data);
    temp->next = head;
    head = temp;
    return head;
}

// Function to traverse the list and print the data of each Node
void traverse(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to delete a Node from the begining of the list

struct Node* deleteNode(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete a Node from the middle of the list

struct Node* deleteNodeFromMiddle(struct Node* head, int position) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* current = head;
    struct Node* previous = NULL;
    int count = 0;
    while (current != NULL && count < position) {
        previous = current;
        current = current->next;
        count++;
    }
    if (current == NULL) {
        return head;
    }
    previous->next = current->next;
    free(current);
    return head;
}

// Function to delete a Node from the end of the list

struct Node* deleteNodeFromEnd(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* current = head;
    struct Node* previous = NULL;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    if (previous == NULL) {
        free(current);
        return NULL;
    }
    previous->next = NULL;
    free(current);
    return head;
}

