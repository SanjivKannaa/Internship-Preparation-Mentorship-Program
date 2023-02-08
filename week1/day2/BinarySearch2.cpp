// Maximum element in an array which is increasing and then decreasing

#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n = 9;
    vector<int> v = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    for(int i=1;i<n;i++){
        if (v[i-1] > v[i]){
            cout << v[i-1] << endl;
            break;
        }
    }
}