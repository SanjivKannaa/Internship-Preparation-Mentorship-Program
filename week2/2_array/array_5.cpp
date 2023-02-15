// Find the two numbers with odd occurrences in an unsorted array

#include<bits/stdc++.h>
using namespace std;

void getOddOccurrence(int arr[],int size){
	unordered_map<int, int> hash;
	for(int i = 0; i < size; i++){
		hash[arr[i]]++;
	}
	for(auto i : hash){
		if(i.second % 2 != 0){
			cout << i.first << " ";
		}
	}
}

int main(){
	int arr[] = { 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	getOddOccurrence(arr, n);
	return 0;
}