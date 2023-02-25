// Find two elements whose sum is closest to zero

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {6, -1, 7, -8, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr, arr+n);
    // int sum=0;
    // int s1, s2;
    // int i = 0, j=0;
    // if (arr[0]>=0){
    //     cout << "The elements " << arr[0] << " and " << arr[1] << " have the sum " << arr[0]+arr[1] << " which is the closest to zero" << endl;
    // }else if (arr[n-1] < 0){
    //     cout << "The elements " << arr[n-2] << " and " << arr[n-1] << " have the sum " << arr[n-2]+arr[n-1] << " which is the closest to zero" << endl;
    // }else{
    //     while (i<n && arr[i] < 0){
    //         i++;
    //     }
    //     j=i;
    //     i--;
    //     sum = arr[i] + arr[j];
    //     cout << i << j << endl;
    //     while (i>0 && j<n){
    //         if (arr[i]+arr[j] > 0){
    //             if (arr[i]+arr[j] < sum){
    //                 sum = arr[i]+arr[j];
    //                 s1=i;
    //                 s2=j;
    //             }
    //             i--;
    //         }else if (arr[i]+arr[j] < 0){
    //             if ((arr[i]+arr[j])*-1 < sum){
    //                 sum = arr[i]+arr[j];
    //                 s1=i;
    //                 s2=j;
    //             }
    //             j++;
    //         }else{
    //             cout << "The elements " << arr[i] << " and " << arr[j] << " have the sum " << sum << " which is the closest to zero" << endl;
    //             return 0;
    //         }
    //         cout << i << j << endl;
    //     }
    // }
    // cout << s1 << s2 << endl;
    // cout << "The elements " << arr[s1] << " and " << arr[s2] << " have the sum " << sum << " which is the closest to zero" << endl;
    int sum = arr[0] + arr[1];
    int s1 = 0;
    int s2 = 1;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            int temp = arr[i] + arr[j];
            if (abs(temp) < abs(sum)){
                sum = temp;
                s1 = i;
                s2 = j;
            }
        }
    }
    cout << "The elements " << arr[s1] << " and " << arr[s2] << " have the sum " << sum << " which is the closest to zero" << endl;
}