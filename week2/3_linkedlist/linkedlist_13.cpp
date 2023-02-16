// Rotate a Linked List by K nodes

#include<bits/stdc++.h>
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
    if (head==NULL){
        head = newnode;
        return ;
    }
    struct node* current = head;
    while (current->next!=NULL){
        current = current->next;
    }
    current->next = newnode;
}

void rotate(int k){
    struct node *current = head;
    int i = k;
    while(--i){
        current = current->next;
    }
    struct node *oldhead = head;
    head = current->next;
    current->next=NULL;
    current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = oldhead;
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
    insert_last(9);
    insert_last(10);
    insert_last(11);
    insert_last(12);
    insert_last(13);
    insert_last(14);
    insert_last(15);
    int k;
    cout << "enter the value of k: ";
    cin >> k;
    rotate(k);
    struct node *current = head;
    while(current!=NULL){
        cout << "-->" << current->data;
        current = current->next;
    }
    cout << endl;
}