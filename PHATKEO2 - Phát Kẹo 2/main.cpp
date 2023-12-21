// https://vinhdinhcoder.net/Problem/Details/4576

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    while (1)
    {
        long double n, k;
        cin >> n >> k;
        cout << (long long)min(n, (1 + sqrt(1 - 4 * 3 * -2 * k)) / 6);
    }

    return 0;
}