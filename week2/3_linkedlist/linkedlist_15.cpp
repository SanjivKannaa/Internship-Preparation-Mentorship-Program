// Reverse alternate K nodes in a singly linkedlist

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

struct node* reverse(struct node* head, int k){
    struct node* current = head;
    struct node* next;
    struct node* prev = NULL;
    int count = 0;
    while (current != NULL && count < k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if(head != NULL)
    head->next = current;
    count = 0;
    while(count < k-1 && current != NULL ){
        current = current->next;
        count++;
    }
    if(current != NULL){
        current->next = reverse(current->next, k);
    }
    return prev;
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
    head = reverse(head, k);
    struct node *current = head;
    while(current!=NULL){
        cout << "-->" << current->data;
        current = current->next;
    }
    cout << endl;
}