// Find the least positive number missing in an unsorted array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 4, 3, 9, -4, -2, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int value = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i] >= 0 && arr[i]<value){
            value = arr[i];
        }
    }
    cout << value << endl;
}