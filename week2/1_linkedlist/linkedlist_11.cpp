// Union and Intersection of two Linked Lists

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;

struct node* insert_first(struct node* headi, int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = headi;
    headi = newnode;
    return headi;
}

struct node* insert_last(struct node* headi, int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    struct node* current = headi;
    if (current==NULL){
        headi=newnode;
    }else{
        while (current->next!=NULL){
            current = current->next;
        }
        current->next = newnode;
    }
    return headi;
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

void printll(struct node *head){
    struct node *current = head;
    if (current==NULL){
        cout << "NULL" << endl;
    }
    while(current!=NULL){
        cout << "->" << current->data;
        current=current->next;
    }
    cout << endl;
}

int main(){
    head1 = insert_first(head1, 1);
    head1 = insert_first(head1, 2);
    head1 = insert_first(head1, 3);
    head1 = insert_first(head1, 4);
    head1 = insert_first(head1, 5);
    head2 = insert_first(head2, 3);
    head2 = insert_first(head2, 4);
    head2 = insert_first(head2, 5);
    head2 = insert_first(head2, 6);
    head2 = insert_first(head2, 7);
    unordered_set<int> u;
    printll(head1);
    printll(head2);
    struct node *current = head1;
    while(current!=NULL){
        u.insert(current->data);
        current = current->next;
    }
    current = head2;
    while(current!=NULL){
        u.insert(current->data);
        current = current->next;
    }
    cout << "UNION: ";
    for (auto const &i: u) {
        cout << i << " ";
    }
    cout << endl;
    unordered_set<int> intersect;
    unordered_set<int> l1;
    current = head1;
    while(current!=NULL){
        l1.insert(current->data);
        current = current->next;
    }
    current = head2;
    while(current!=NULL){
        int value = current->data;
        if (l1.find(value)!=l1.end()){
            intersect.insert(value);
        }
        current = current->next;
    }
    cout << "INTERSECTION: ";
    for (auto const &i: intersect) {
        cout << i << " ";
    }
    cout << endl;
}