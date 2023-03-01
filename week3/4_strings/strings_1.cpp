// Print reverse of a string using recursion
#include<bits/stdc++.h>
using namespace std;

void printstring(char s[], int i){
    if (s[i+1] != '\0'){
        printstring(s, i+1);
    }
    cout << s[i];
}

int main(){
    char s[] = "helloworld\0";
    int i=0;
    printstring(s, 0);
}