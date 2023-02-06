#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_front(0);
    l.push_back(1);
    l.push_back(2);
    cout << l.back();
    l.pop_back();
    l.pop_front();
}