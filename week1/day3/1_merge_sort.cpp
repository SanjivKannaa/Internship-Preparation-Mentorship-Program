// merge sort algorithm
#include<iostream>
#include<algorithm>

using namespace std;

void merge(int array[], int left, int mid, int right);
void mergesort(int array[], int begin, int end);
int main(){
    int arr[] = {1, 3, 4, 6, 2, 4, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);
}

void mergesort(int array[], int begin, int end){
    if(begin > end){
        return;
    }
    int mid = begin+((end-begin)/2);
    mergesort(array, begin, mid);
    mergesort(array, mid+1, end);
    merge(array, begin, mid, end);
}

void merge(int array[], int left, int mid, int right){
    
}