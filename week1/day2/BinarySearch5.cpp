// Longest increasing subsequence
#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int count=0;
    int arr[] = {2, 1, 2, 3, 5, 3, 4, 5, 6, 7, 8, 9, 10, 2};
    // answer = 7
    int i=0;
    int j=1;
    int c;
    while(j<sizeof(arr)/sizeof(arr[0])){
        if (arr[i]>=arr[j]){
            i=j;
            j++;
            if (count<c){
                count=c;
            }
            c=0
        }else{
            c++;
        }
    }
    cout << count;
}
