/*
http://lequydon.ntucoder.net/Problem/Details/6084?fbclid=IwAR3kKksK4_tRqqi6y6kRJdD7NtTS2v74j4cgZW1stVzUYdHbf8cWGUZlf7A
*/

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    long long m;
    cin >> m;
    int sqr = (int)sqrt(m);
    if (sqr % 2 == 0) {
        sqr--;
    }
    for (int i = sqr; i >= 1; i -= 2) {
        if (m % i == 0) {
            cout << m / i;
            return 0;
        }
    }
    return 0;
}