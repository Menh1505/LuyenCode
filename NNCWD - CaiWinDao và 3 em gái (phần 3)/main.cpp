/*
http://lequydon.ntucoder.net/Problem/Details/6306
*/
#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int bet[7] = { 0 }, a[3], sum = 0;

    for (int i = 0; i < 3; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        while (a[i] != 0)
        {
            int x, y;
            cin >> x >> y;

            bet[x] += y;
            a[i]--;
            sum += y;
        }
    }

    int m1 = 0, m2 = 0, m3 = 0, res = 0;
    for (int i = 1; i < 7; ++i)
    {
        if (bet[i] > a[0])
        {
            a[2] = a[1];
            a[1] = a[0];
            a[0] = bet[i];
        }
        else if (bet[i] > a[1])
        {
            a[2] = a[1];
            a[1] = bet[i];
        }
        else if (bet[i] > a[2])
        {
            a[2] = bet[i];
        }

        int x3 = bet[i] * 3;
        if (x3 - (sum - bet[i]) > res)
        {
            res = x3 - (sum - bet[i]);
        }
        for (int j = 1; j < 7; ++j)
        {
            if (i == j)
                continue;
            int x2 = bet[i] * 2 + bet[j];
            if (x2 - (sum - bet[i] - bet[j]) > res)
            {
                res = x2 - (sum - bet[i] - bet[j]);
            }
        }
    }

    if (sum - (sum - (a[0] + a[1] + a[2])) * 2 > res)
    {
        res = sum - (sum - (a[0] + a[1] + a[2])) * 2;
    }
    cout << res;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin >> n >> x;
    n += x;
    cin >> x;
    n += x;
    int a[7] = {0};
    while(n--){
        cin >> x >> y;
        a[x] += y;
    }
    int Max = INT_MIN;
    for(int i = 1; i <= 6; ++i){
        for(int j = 1; j <= 6; ++j){
            for(int k = 1; k <= 6; ++k){
                int sum = a[i] + a[j] + a[k];
                for(int l = 1; l <= 6; ++l){
                    if(l != i && l != j && l != k){
                        sum -= a[l];
                    }
                }
                Max = max(Max, sum);
            }
        }
    }
    cout << Max;
    return 0;
}
*/