// Find the intersection point of two Linked Lists

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;

void insert_first(struct node* headi, int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = headi;
    headi = newnode;
}

void insert_last(struct node* headi, int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    struct node* current = headi;
    while (current->next!=NULL){
        current = current->next;
    }
    current->next = newnode;
}

int delete_first(struct node* headi){
    struct node* temp = headi;
    headi = headi->next;
    int data = temp->data;
    free(temp);
    return data;
}

int delete_last(struct node* headi){
    if (headi==NULL){
        cout << "linkedlist is empty";
	    return -1;
    }
    if (headi->next==NULL){
	    struct node* temp = headi;
	    headi = NULL;
	    int data = temp->data;
	    free(temp);
	    return data;
    }
    struct node* current = headi;
    while(current->next->next!=NULL){
        current = current->next;
    }
    struct node* temp = current->next;
    int data = temp->data;
    current->next = NULL;
    free(temp);
    return data;
}