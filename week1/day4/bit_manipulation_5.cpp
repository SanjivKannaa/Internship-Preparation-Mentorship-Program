// Rotate bits of an integer
#include<iostream>
using namespace std;

int main(){
	int n, d;
    cout << "enter the value of n: ";
    cin  >> n;
    cout << "enter the value of d: ";
    cin >> d;
	cout << "\nLeft Rotation of " << n << " by " << d << " is ";
	cout << (n << d)||(n >> (32 - d));
	cout << "\nRight Rotation of " << n << " by " << d << " is ";
	cout << (n >> d)||(n << (32 - d));
    return 0;
}