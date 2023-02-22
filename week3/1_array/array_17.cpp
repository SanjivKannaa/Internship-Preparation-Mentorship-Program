// Find two numbers such that their difference is minimum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4, 5, 3, 7, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int min = arr[1] - arr[0];
    for (int i=2;i<n;i++){
        if (arr[i] - arr[i-1] < min){
            min = arr[i] - arr[i-1];
        }
    }
    cout << "Min difference is : " << min << endl;
}