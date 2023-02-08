// Merge two sorted arrays into a single sorted array
#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {5, 6, 7, 8, 9};
    // cout << v1.back();
    int n1 = 4;
    int n2 = 5;
    vector<int> result;
    int i=0;
    int j=0;
    while (result.back()!=max(v1[n2], v2[n2])){
        if (v1[i] > v2[j]){
            result.push_back(v2[j]);
            j++;
        }else{
            result.push_back(v1[i]);
            i++;
        }
    }
    for(i=0;i<n1+n2;i++){
        cout << result[i];                                                                                                  
    }
    // cout << result << endl;
}