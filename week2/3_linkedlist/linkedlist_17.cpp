// Sort a linked list of 0s, 1s and 2s

#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	struct node* next;
};

struct node* head = NULL;
struct node* result = NULL;
struct node* newNode(int key){
	struct node* temp = new struct node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

int main(){
    
}