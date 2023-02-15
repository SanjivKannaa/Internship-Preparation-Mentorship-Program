// Union and Intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;

void array_intersection(int arr1[], int arr2[], int n1, int n2){
    cout << "duh";
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if (arr1[i] < arr2[j]){
            i++;
        }
        if (arr1[i] > arr2[j]){
            j++;
        }
        if (arr1[i] == arr2[i]){
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

// void array_union(int arr1[], int arr2[], int n1, int n2){
//     int i=0, j=0;
//     while(i<n1 && j<n2){
//         if (arr1[i] < arr2[j]){
//             cout << arr1[i++] << " ";
//         }
//         if (arr1[j] > arr2[i]){
//             cout << arr2[j++] << " ";
//         }
//         if (arr1[i] == arr2[i]){
//             cout << arr2[j++] << " ";
//             i++;
//         }
//     }
//     while (i<n1){
//         cout << arr1[i++] << " ";
//     }
//     while (j<n2){
//         cout << arr2[j++] << " ";
//     }
// }



int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "hi";
    cout << "intersection: ";
    array_intersection(arr1, arr2, n1, n2);
    cout << "union: ";
    // array_union(arr1, arr2, n1, n2);
    return 0;
}