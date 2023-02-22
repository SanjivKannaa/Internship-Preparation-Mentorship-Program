// Find a triplet that sum to a given value

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n=6;
    int sum;
    cout << "enter the sum: ";
    cin >> sum;
    int i=0, j=0, k=0;
    for (i=0;i<n-2;i++){
        j = i+1;
        k = n-1;
        while(i<j){
            if (arr[i] + arr[j] + arr[k] == sum){
                cout << arr[i] << " " <<  arr[j] << " " <<  arr[k] << endl;
                return 0;
            }else if (arr[i] + arr[j] + arr[k] < sum){
                j++;
            }else{
                k--;
            }
        }
    }
    cout << "no such triplet" << endl;
}