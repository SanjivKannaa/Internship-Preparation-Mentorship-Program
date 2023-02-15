// find the next higher permutation of the given number as an array of digits. If such a number doesn’t exist, return -1.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3, 8, 2, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (arr[n-1] > arr[n-2]){
        swap(arr[n-1], arr[n-2]);
    }else{
        swap(arr[n-1], arr[n-3]); 
        if (arr[n-1] < arr[n-2]){
            swap(arr[n-1], arr[n-2]);
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}