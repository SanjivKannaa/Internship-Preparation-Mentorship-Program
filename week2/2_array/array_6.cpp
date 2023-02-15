// Find the next smallest palindrome

#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(int num){
    int n, k, rev = 0;
    n = num;
    while (num != 0) {
        k = num % 10;
        rev = (rev * 10) + k;
        num = num / 10;
    }
    if (n == rev) {
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n = 19080;
    while(is_palindrome(n) == false){
        n++;
    }
    cout << "next palindrome: " << n;
}