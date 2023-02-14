// Nth node from the end of a Linked list

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

int main(){
    insert_first(1);
    insert_last(2);
    insert_last(3);
    insert_last(4);
    insert_last(5);
    insert_last(6);
    insert_last(7);
    insert_last(8);
    int n;
    cout << "enter the value of n (< 8): ";
    cin >> n;
    int length=0;
    struct node* current = head;
    while (current->next!=NULL){
        current=current->next;
        length++;
    }
    current = head;
    for(int i=0;i<length-n+1;i++){
        current=current->next;
    }
    cout << current->data;
}