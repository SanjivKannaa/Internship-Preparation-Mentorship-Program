// Find First and Last Position of Element in Sorted Array
#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8};
    int n;
    int len = sizeof(arr)/sizeof(arr[0]);
    cin >> n;
    int start=0, end=0;
    for (int i=1;i<len;i++){
        if (arr[i]==n && arr[i-1]!=n){
            start=i;
        }
        if (arr[i]==n && (arr[i+1]!=n || n==len-1)){
            end=i;
        }
    }
    if (arr[len-1]==n && arr[len-2]!=n){
        start = len-1;
        end = len-1;
    }
    cout << n << " starts at " << start << " and ends at " << end;
}