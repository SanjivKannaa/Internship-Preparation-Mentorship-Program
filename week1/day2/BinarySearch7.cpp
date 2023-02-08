// Search in Rotated Sorted Array

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int element;
    cout << "enter the element to search: ";
    cin >> element;
    int inflection_point;
    int inflection_value;
    for (int i=0;i<(sizeof(v)/sizeof(v[0]))-1;i++){
        if (v[i-1] > v[i]){
            inflection_point = i;
            inflection_value = v[i];
            break;
        }
    }
    if (element < inflection_value){
        binary_search(0, inflection_point, element);
    }else{
        binary_search(inflection_point+1, sizeof(v)/sizeof(v[0]), element);
    }
}