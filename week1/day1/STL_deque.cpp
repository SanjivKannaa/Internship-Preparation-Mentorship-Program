#include<algorithm>
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(0);
    random_shuffle(d.begin(), d.end());
    return 0;
}