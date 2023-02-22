// Find the row with maximum number of 1s in a 2D row-wise sorted matrix

#include<bits/stdc++.h>
using namespace std;

int count_1s(int arr[], int n){
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]>1){
            return count;
        }
        if (arr[i]==1){
            count++;
        }
    }
    return 0;
}

int main(){
    int arr[4][4] = {{0, 0, 1, 2}, {0, 1, 1, 3}, {1, 1, 1, 2}, {1, 1, 2, 3}};
    int value = 0;
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        int temp;
        int n = sizeof(arr[i])/sizeof(arr[i][0]);
        temp = count_1s(arr[i], n);
        if (temp>value){
            value = temp;
        }
    }
    cout << "highest number of ones = " << value << endl;
}