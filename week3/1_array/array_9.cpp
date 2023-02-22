// Find a,b,c such that a^2+b^2=c^2

#include<bits/stdc++.h>
using namespace std;

int findifintexists(int c){
    int ans = 0;
    for (int i = 1; i <= c; ++i) {
        for (int j = i; j <= c; ++j) {
            int x = i * i + j * j;
            int y = sqrt(x);
            if (y * y == x && y <= c)
                ++ans;
        }
    }
    return ans;
}

int main(){
    int c;
    cout << "enter the value of c: ";
    cin >> c;
    cout << findifintexists(c) << " triplets exists" << endl;
}