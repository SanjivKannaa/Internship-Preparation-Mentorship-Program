// Count set bits in an integer
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    unsigned int count = 0;
    while (n){
        count += n & 1;
        n >>= 1;
    }
    cout << count;
    return 0;
}