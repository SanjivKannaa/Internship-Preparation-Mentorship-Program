// Find the two non-repeating elements in an array of repeating elements
#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 }; // 2, 2, 3, 3, 7, 9, 11, 11
	int n = sizeof(arr) / sizeof(*arr);
    sort(arr, arr + n);
    int i=0;
    int j=1;
    while (j<n){
        if (arr[i] == arr[j]){
            j++;
        }else{
            if (i+1==j){
                cout << arr[i] << endl;
                // return 0;
            }
            i = j;
        }
    }
}