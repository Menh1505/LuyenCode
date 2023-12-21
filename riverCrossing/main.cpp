// https://codelearn.io/training/detail/1754519
#include <iostream>
#include <cmath>
using namespace std;

int RiverCrossing(int n, int k)
{
    if (k == 1 || k == 0)
        return -1;
    if (k == n || (k >= n))
        return 1;

    float res = (((float)n - (float)k) / ((float)k - 1)) * 2 + 1;
    if (res != (int)res) return ++res;
    else return res;
}

//code đúng: return 1 + ceil(static_cast<double>(n - k) / (k - 1)) * 2;
int main()
{
    cout << RiverCrossing(7, 3);
    return 0;
}

// ((n-k)/(k-1))*2+1
// 5 2 7
// 5 3 3
// 72 5 67