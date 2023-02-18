// Merge two sorted linked lists

#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	struct node* next;
};

struct node* newNode(int key){
	struct node* temp = new struct node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

int main() {
	struct node* a = newNode(5);
	a->next = newNode(10);
	a->next->next = newNode(15);
	a->next->next->next = newNode(40);
	struct node* b = newNode(2);
	b->next = newNode(3);
	b->next->next = newNode(20);
    vector<int>v;
	while(a!=NULL){
	    v.push_back(a->key);
	    a=a->next;
	}
	while(b!=NULL){
	    v.push_back(b->key);
	    b=b->next;
	}
	sort(v.begin(),v.end());
	struct node* result= newNode(-1);
	struct node* temp=result;
	for(int i=0;i<v.size();i++){
	    result->next=newNode(v[i]);
	    result=result->next;
	}
	temp=temp->next;
	cout<<"Resultant Merge Linked List Is :";
	while(temp!=NULL){
	    cout<<temp->key<<" ";
	    temp=temp->next;
	}
    cout << endl;
	return 0;
}
