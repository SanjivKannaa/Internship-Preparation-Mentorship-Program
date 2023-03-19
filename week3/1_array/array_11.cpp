// Find four elements that sum to a given value

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 4, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin >> sum;
    sort(arr, arr + (sizeof(arr)/sizeof(arr[0])));
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x = sum - (arr[i]+arr[j]);
            int search_result = binary_search(&arr[0], &arr[n-1], x);
            if (binary_search(&arr[0], &arr[n-1], x) && ((sum-arr[i]-arr[j])!=arr[i] && (sum-arr[i]-arr[j])!=arr[j])){
                cout << arr[i] << " + " << arr[j] << " + " << sum-arr[i]-arr[j] << " = " << sum << endl;
            }
        }
    }
}