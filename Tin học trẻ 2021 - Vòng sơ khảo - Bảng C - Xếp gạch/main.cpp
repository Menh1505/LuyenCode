/* https://oj.vnoi.info/problem/tht21_skc_brick */

#include<iostream>
#include<vector>
using namespace std;

bool b[(int)(1e6 + 1000)];

void sang_nto(int n)
{
    b[0] = 1;
    b[1] = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (b[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                b[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sang_nto((int)(1e6 + 1000));
    vector<long long> a;
    a.push_back(2);
    for (int i = 3; i < (int)(1e6 + 1000); ++i)
    {
        if (b[i] == 0)
        {
            a[a.size() - 1] *= (long long)i;
            a.push_back(i);
        }
    }
    a.erase(a.end() - 1);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, temp;
        cin >> n;
        temp = *(upper_bound(a.begin(), a.end(), n) - 1);
        cout << n - temp << endl;
    }
    return 0;
}