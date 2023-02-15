// Find missing number from array of N-1 numbers in the range 1 to N

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 1, 3, 7, 5, 6, 2 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n+1];
    for (int i=0;i<n+1;i++){
        temp[i] = 0;
    }
    // int temp[] = { 0, 0, 0, 0, 0, 0, 0};
    for (int i=0;i<n;i++){
        temp[arr[i]-1] = 1;
    }
    for (int i=0;i<n;i++){
        if (temp[i] != 1){
            cout << (i+1) << endl;
            return 0;
        }
    }
    cout << "none" << endl;
}