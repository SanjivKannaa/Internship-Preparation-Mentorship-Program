// Turn off the rightmost set bit
#include <iostream>
using namespace std;


int main(){
	int n;
    cout << "enter the value of n: ";
    cin >> n;
    cout << (n & (n-1));
	return 0;
}