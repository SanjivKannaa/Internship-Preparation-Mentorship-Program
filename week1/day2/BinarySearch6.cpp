// Check for Majority Element in a sorted array
#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int count=0;
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int i = 0;
    int j = 0;
    int c=0;
    while(j<sizeof(arr)/sizeof(arr[0])){
        if (arr[i] == arr[j]){
            c++;
            j++;
        }else{
            
        }
    }
}
