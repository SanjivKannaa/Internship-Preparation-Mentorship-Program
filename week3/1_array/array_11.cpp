// Find four elements that sum to a given value

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 4, 7, 8};
    sort(arr, arr + (sizeof(arr)/sizeof(arr[0])));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if (arr[i]==arr[i+1]){
            cout << arr[i] << endl;
            return 0;
        }
    }
}