// Find the intersection point of two Linked Lists
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;

void insert_first1(int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = head1;
    head1 = newnode;
}

void insert_first2(int data){
    struct node* newnode = new node();
    newnode->data = data;
    newnode->next = head2;
    head2 = newnode;
}


int main(){
    insert_first1(5);
    insert_first1(4);
    insert_first1(3);
    insert_first1(2);
    insert_first1(1);
    insert_first2(8);
    insert_first2(7);
    insert_first2(4);
    insert_first2(5);
    insert_first2(6);
    struct node* current1 = head1;
    struct node* current2 = head2;
    while(current1!=NULL){
        current2 = head2;
        while (current2!=NULL){
            if (current1->data == current2->data){
                cout << "intersection happens at : " << current1->data << " " << endl;
                return 0;
            }
            current2=current2->next;
        }
        current1=current1->next;
    }
}