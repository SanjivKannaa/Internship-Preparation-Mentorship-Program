// Search a number in a row wise and column wise sorted 2D matrix
#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int n = 4;
    int i=0, j=n-1;
    int search_element=0;
    cin >> search_element;
    while (matrix[i][j]!=search_element && i<n && j>=0){
        if (search_element<matrix[i][j]){
            j-=1;
        }else if (search_element>matrix[i][j]){
            i+=1;
        }
    }
    if (search_element==matrix[i][j]){
        cout << "element found at position: " << i+1 << ", " << j+1 << endl;
    }
}