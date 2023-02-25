// Find points in an array where left-sum==right-sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int rsum = 0;
    for (int i=0;i<n;i++){
        rsum = rsum + arr[i];
    }
    int lsum = arr[0];
    for (int i=0;i<n;i++){
        
    }
}