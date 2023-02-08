// Find the Minimum length Unsorted Subarray, sorting which makes the array sorted(I do not know why this is in binary search)

#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n = 10;
    vector<int> arr = {1, 2, 5, 3, 6, 4, 7, 8, 9, 10};
    vector<int> sorted_arr = arr;
    // vector<int> sorted_arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(sorted_arr.begin(), sorted_arr.end());
    int s=0;
    int e=n-1;
    for (int i=0;i<n;i++){
        if(arr[i]!=sorted_arr[i]){
            s=i;
            break;
        } 
    }
    for (int i=n-1;i>=0;i--){
        if(arr[i]!=sorted_arr[i]){
            e=i;
            break;
        } 
    }
    cout << e-s+1 << endl;
}