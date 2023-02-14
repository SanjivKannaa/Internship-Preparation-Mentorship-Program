#include <iostream>
#include <set>
using namespace std;
int main()
{
    typedef multiset<int, less<int> > SetInt;
    SetInt s;
    for (int i = 0; i < 10; i++) {
        s.insert(i);
        s.insert(i * 2);
    }
    SetInt::iterator iter = s.begin();
    while (iter != s.end()) {
        cout << *iter << " ";
        iter++;
    }
    cout << endl;
    return 0;
}