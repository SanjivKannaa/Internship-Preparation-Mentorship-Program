// Add two numbers without using arithmetic operators
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    while(b--){
        a++;
    }
    cout << "a+b = " << a;
}