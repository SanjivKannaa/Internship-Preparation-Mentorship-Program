// Count numer of set its to be flipped to convert A to B
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a, b, n;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    n = (a^b);
    unsigned int count = 0;
    while (n){
        count += n & 1;
        n >>= 1;
    }
    cout << count;
    return 0;
}