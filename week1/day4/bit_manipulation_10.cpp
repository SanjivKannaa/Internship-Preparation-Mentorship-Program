// swap every consecutive odd and even positioned bit in a number
#include<iostream>
using namespace std;

int swap_consecutive(int n){
    int x, y;
    // cout << "\nn = " << n;
    x = (n & 1);
    // cout << "\nx = " << x;
    n = (n >> 1);
    // cout << "\nn =  " << n;
    y = (n & 1);
    // cout << "\ny = " << y;
    n = (n >> 1);
    // cout << "\nn = " << n << endl;
    n = swap_consecutive(n);
    n = (n << 1);
    if (x==1){
        n++;
    }
    // cout << "\nn = " << n;
    n = (n << 1);
    if (y==1){
        n++;
    }
    // cout << "\nn = " << n;
    return n;
}


int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    cout << swap_consecutive(n);
    // n = swap_consecutive(n);
}