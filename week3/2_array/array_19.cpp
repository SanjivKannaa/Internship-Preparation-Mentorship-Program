// Find the first subarray which has a zero sum in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-3, -1, 3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    unordered_set<int> sumSet;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0 || sumSet.find(sum) != sumSet.end()){
            cout << "YES" << endl;
            return 0;
        }
        sumSet.insert(sum);
    }
    cout << "NO" << endl;
}