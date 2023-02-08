// Find the minimum element/(or search for an element) in a sorted and rotated array

#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n = 9;
    vector<int> v = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    for(int i=1;i<n;i++){
        if (v[i-1] > v[i]){
            cout << v[i] << endl;
            break;
        }
    }
}