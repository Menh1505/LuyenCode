/*
http://ntucoder.net/Problem/Details/132?fbclid=IwAR201WFWL4bMBRmPXqqD-MMX2OpW_eo1eNWvzregUDveCD1zXzpSDrnyA1U
*/

#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (int)log2((double)b / a);
    return 0;
}