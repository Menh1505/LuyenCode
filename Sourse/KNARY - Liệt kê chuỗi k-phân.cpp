/*
http://ntucoder.net/Problem/Details/114
*/
#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int k, n, sz;
    cin >> k >> n;

    int* a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = 1;
    }
    sz = pow(k, n);
    cout << sz << endl;
    for (int i = 0; i < sz; ++i)
    {
        for (int x = 0; x < n; ++x)
        {
            cout << a[x];
        }
        cout << endl;
        int j = n - 1;
        a[j]++;
        while (a[j] > k)
        {
            a[j] = 1;
            a[j - 1]++;
            j--;
        }
    }
    return 0;
}
