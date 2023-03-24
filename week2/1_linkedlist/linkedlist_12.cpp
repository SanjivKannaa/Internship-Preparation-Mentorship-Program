// Delete Alternate Nodes of a Linked List

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node *head = NULL;

void insert_first(int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_last(int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    struct node* current = head;
    if (current==NULL){
        head=newnode;
        return ;
    }
    while (current->next!=NULL){
        current = current->next;
    }
    current->next = newnode;
}

int delete_first(){
    struct node* temp = head;
    head = head->next;
    int data = temp->data;
    free(temp);
    return data;
}

int delete_last(){
    if (head==NULL){
        cout << "linkedlist is empty";
	    return -1;
    }
    if (head->next==NULL){
	    struct node* temp = head;
	    head = NULL;
	    int data = temp->data;
	    free(temp);
	    return data;
    }
    struct node* current = head;
    while(current->next->next!=NULL){
        current = current->next;
    }
    struct node* temp = current->next;
    int data = temp->data;
    current->next = NULL;
    free(temp);
    return data;
}

void printll(){
    struct node *current = head;
    if (current==NULL){
        cout << "NULL" << endl;
        return ;
    }
    while(current!=NULL){
        cout << "->" << current->data;
        current=current->next;
    }
    cout << endl;
}

void delete_alternate(){
    struct node *current = head;
    if (current == NULL || current->next == NULL) {
        return;
    }
    struct node* prev = head;
    struct node* curr = head->next;
    while (prev != NULL && curr != NULL) {
        prev->next = curr->next;
        delete curr;
        prev = prev->next;
        if (prev != NULL) {
            curr = prev->next;
        }
    }
}

int main(){
    insert_last(1);
    insert_last(2);
    insert_last(3);
    insert_last(4);
    insert_last(5);
    insert_last(6);
    insert_last(7);
    insert_last(8);
    insert_last(9);
    cout << "before deleting: ";
    printll();
    delete_alternate();
    cout << "after deleting: ";
    printll();
}