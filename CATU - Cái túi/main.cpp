/*
http://ntucoder.net/Problem/Details/1147?fbclid=IwAR1jHWRi4CNtrZ-Fr5NuTrvFmkZcM0LBqkXnTNnlf0q7HmJU0-8mKDu3Myg
*/
#include<iostream>
#include<vector>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> w(n), v(n), a(n), res(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> w[i] >> v[i];
    }
    int sz = (int)pow(2.0, n);
    bool check = false;
    int MaxV = 0;
    for (int i = 0; i < sz; ++i) 
    {
        int j = n - 1;
        int sumV = 0, sumW = 0;
        int temp = i;
        while (temp != 0) 
        {
            a[j] = temp % 2;
            temp /= 2;
            if (a[j] == 1) 
            {
                sumW += w[j];
                sumV += v[j];
            }
            j--;
        }
        if (sumW <= m && sumV > MaxV) 
        {
            check = true;
            MaxV = sumV;
            res = a;
        }
    }
    if (check == false) 
    {
        cout << 0;
    }
    else {
        cout << MaxV << endl;
        for (int i = 0; i < (int)res.size(); ++i) 
        {
            if (res[i] == 1) 
            {
                cout << i + 1 << " ";
            }
        }
    }
    return 0;
}
