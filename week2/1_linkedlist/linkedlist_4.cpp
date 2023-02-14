// Check if a singly linked list is a Palindrome
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

bool is_palindrome(node* head){
    node* slow = head;
    stack<int> s;
    while (slow != NULL) {
        s.push(slow->data);
        slow = slow->next;
    }
    while (head != NULL) {
        int i = s.top();
        s.pop();
        if (head->data != i) {
            return false;
        }
        head = head->next;
    } 
    return true;
}

int main(){
    insert_first(1);
    insert_last(2);
    insert_last(3);
    insert_last(4);
    insert_last(5);
    insert_last(4);
    insert_last(3);
    insert_last(2);
    insert_last(1);
    if (is_palindrome(head)){
        cout << "is a palindome";
    }else{
        cout << "is not a palindome";
    }
    return 0;
}