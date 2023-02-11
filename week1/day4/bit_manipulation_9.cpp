// Position of the rightmost set bit
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int count = 1;
    int m;
    while(n>0){
        if ((n&1) == 1){
            break;
        }
        count++;
        n = (n >> 1);
    }
    cout << count;
}