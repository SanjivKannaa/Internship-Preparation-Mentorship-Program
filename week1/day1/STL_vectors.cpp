#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    for (int i=0;i<10;i++){
        v.push_back(i);
    }
    for (int i=9;i>=0;i--){
        cout << v[i];
    }
    return 0;
}