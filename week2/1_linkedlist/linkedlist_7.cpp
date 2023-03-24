// Detect and remove loop in a Linked List
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

bool detect_loop(){
    struct node *current = head;
    unordered_set<struct node*> s;
    while (current!=NULL){
        if (s.find(current)!=s.end()){
            return true;
        }
        s.insert(current);
        current = current->next;
    }
    return false;
}

int main(){
    insert_first(1);
    insert_first(2);
    insert_first(3);
    insert_first(4);
    insert_first(5);
    head->next->next->next->next=head->next->next;
    if (detect_loop()){
        cout << "loop exists!" << endl;
    }else{
        cout << "no loop" << endl;
    }
}