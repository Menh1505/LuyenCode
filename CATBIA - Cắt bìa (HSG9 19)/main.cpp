/*
http://lequydon.ntucoder.net/Problem/Details/6083?fbclid=IwAR0PSHuixrINu28yqSQKUvDhyaCEg-juDTU84QBjGqWNP7PDaq-BxQYQ2IU
*/

#include <iostream>

using namespace std;

int gcd(int a, int b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    long long x, y;
    cin >> x >> y;
    long long __gcd = gcd(x, y);
    cout << (x / __gcd) * (y / __gcd);
    return 0;
}