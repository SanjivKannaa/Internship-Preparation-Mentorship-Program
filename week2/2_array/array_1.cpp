// Union and Intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;

void array_intersection(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]){
            i++;
        }else if (arr2[j] < arr1[i]){
            j++;
        }else{
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

void array_union(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]){
            cout << arr1[i++] << " ";
        }else if (arr2[j] < arr1[i]){
            cout << arr2[j++] << " ";
        }else{
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}



int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "intersection: ";
    array_intersection(arr1, arr2, n1, n2);
    cout << "\nunion: ";
    array_union(arr1, arr2, n1, n2);
    cout << endl;
    return 0;
}