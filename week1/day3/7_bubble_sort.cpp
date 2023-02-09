// merge sort algorithm
#include<iostream>
#include<algorithm>

using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1, 3, 6, 2, 5, 7, 4, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    for(int i=0;i<n;i++){
        cout << " ";
        cout << arr[i];
    }
    cout << endl;
}