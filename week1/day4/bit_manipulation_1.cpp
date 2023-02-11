// Check if a given number is a power of 2
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter the numbers: ";
    cin >> n;
    // cout << (n ^ n-1); 
    if ((n ^ n-1) == n*2 - 1){
        cout << "it is a power of 2" << endl;
    }else{
        cout << "it is not a power of 2" << endl;
    }
    return 0;
}