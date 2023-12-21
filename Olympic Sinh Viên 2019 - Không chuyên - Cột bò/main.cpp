/*
https://oj.vnoi.info/problem/olp_kc19_cow?fbclid=IwAR0JZEt6UX2SMTA1paB7JtAwMZTHzm7-_nHOuDdwbc4D6PHxfnkmVrz6jc4
*/

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b;
    cin >> n >> a >> b;
    double Min = DBL_MAX;
    while (n--) {
        long long x, y, r;
        cin >> x >> y >> r;
        Min = min(Min, sqrt((x - a) * (x - a) + (y - b) * (y - b)) - r);
    }
    long long res = Min;
    if (Min == res) {
        res--;
    }
    cout << res;
    return 0;
}