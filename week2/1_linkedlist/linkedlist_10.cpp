// Intersection of two Sorted Linked Lists

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
    insert_first2(6);
    insert_first2(5);
    insert_first2(4);
    struct node* current1 = head1;
    int i = 1;
    int n1 = 5;
    struct node* current2 = head2;
    int j = 1;
    int n2 = 5;
    while(i<n1 || j<n2){
        if (current1->data == current2->data){
            cout << "intersection point : " << current1->data << endl;
            return 0;
        }else if(current1->data < current2->data){
            i++;
            if (current1!=NULL){
                current1 = current1->next;
            }
        }else{
            j++;
            if (current2!=NULL){
                current2 = current2->next;
            }
        }
    }
    cout << "no point of interesection" << endl;
}