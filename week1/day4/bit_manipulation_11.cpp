// Position of the only set bit
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int count = 1;
    int m;
    bool flag = false;
    while(n>0){
        if ((n&1) == 1){
            if (flag){
                count = 0;
                break;
            }
            flag = true;
        }
        count++;
        n = (n >> 1);
    }
    cout << (count-1);
}