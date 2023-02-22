// Find pair of numbers with given sum X

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 7, 8, 3, 9};
    int n=6;
    int x=0;
    cout << "enter the value of x = ";
    cin >> x;
    sort(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]) - 1;
    while (l < r) {
        if (arr[l] + arr[r] == x){
            cout << "YES" << endl;
            return 0;
        }else if (arr[l] + arr[r] < x){
            l++;
        }else{
            r--;
        }
    }
    cout << "NO" << endl;
}