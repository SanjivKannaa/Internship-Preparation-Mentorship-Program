// Search in Rotated Sorted Array

#include<iostream>
#include<algorithm>

using namespace std;


void binarySearch(vector<int> array, int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            cout << mid << endl;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    // return -1;
}

int main(){
    vector<int> v = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int n=9;
    int element;
    cout << "enter the element to search: ";
    cin >> element;
    int inflection_point;
    int inflection_value;
    for (int i=0;i<n-1;i++){
        if (v[i] > v[i+1]){
            inflection_point = i;
            inflection_value = v[i];
            break;
        }
    }
    if (element < v[0]){
        binarySearch(v, element, inflection_point+1, n);
    }else{
        binarySearch(v, element, 0, inflection_point+1);
    }
}