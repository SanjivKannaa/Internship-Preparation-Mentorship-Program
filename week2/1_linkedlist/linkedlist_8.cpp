// Middle of a Linked list

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
    insert_first(4);
    insert_first(3);
    insert_first(2);
    insert_first(1);
    insert_last(5);
    insert_last(6);
    insert_last(7);
    insert_last(8);
    insert_first(0);
    int count=0;
    struct node* current = head;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    count = count/2;
    current = head;
    while(count--){
        current = current->next;
    }
    cout << current->data << endl;
}