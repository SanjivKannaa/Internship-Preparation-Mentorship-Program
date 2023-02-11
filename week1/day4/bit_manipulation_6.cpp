// Compute the absolute value (abs) without branching

#include <iostream>
using namespace std;


int main(){
	int n;
    cout << "enter the value of n: ";
    cin >> n;
    int mask = n >> (sizeof(int) * 7);
	cout << "Absolute value of " << n << " is " << ((n+mask) ^ mask);
	return 0;
}