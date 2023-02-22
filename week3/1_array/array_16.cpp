// Find Maximum difference between two elements such that the larger element appears afte the smaller element in array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for (int i=1;i<n;i++){
        if (arr[i]>arr[max]){
            max = i;
        }
    }
    int min = 0;
    for (int i=1;i<max;i++){
        if (arr[i]<arr[min]){
            min = i;
        }
    }
    if (min<max){
        cout << "The miximum difference occurs between " << arr[min] << " and " << arr[max] << endl;
    }else{
        cout << "DNE" << endl;
    }
}