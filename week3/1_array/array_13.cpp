// Find the 3 elements such that a[i] < a[j] < a[k] and i < j < k

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 5, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(arr[i+1]<arr[i]){
        if (i==n){
            cout << "does not exist1" << endl;
            return 0;
        }
        if (i==n-1){
            break;
        }
        i++;
    }
    int j=i+1;
    while(arr[j+1]<arr[j]){
        if (j==n){
            cout << "does not exist2" << endl;
            return 0;
        }
        if (j==n-1){
            break;
        }
        j++;
    }
    int k=j+1;
    while(arr[k+1]<arr[k]){
        if (k==n){
            cout << "does not exist3" << endl;
            return 0;
        }
        if (k==n-1){
            break;
        }
        k++;
    }
    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
}