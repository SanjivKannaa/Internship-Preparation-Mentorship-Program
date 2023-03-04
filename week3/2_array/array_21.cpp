// Find points in an array where left-sum==right-sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lsum = 0, rsum = 0;
    for (int i=0;i<n;i++){
        rsum += arr[i];
    }
    for (int i=0;i<n;i++){
        rsum -= arr[i];
        // cout << lsum << "\t" << rsum << endl;
        if (lsum==rsum){
            cout << "leftsum=rightrum @ " << arr[i] << endl;
        }
        lsum += arr[i];
    }
}