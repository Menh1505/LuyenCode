/*
http://ntucoder.net/Problem/Details/5573
*/

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int a[123];
    memset(a, -1, sizeof(a));
    int start = 0;
    int LengthMax = 0;
    for (int i = 0; i < (int)s.length(); ++i) {
        if (a[s[i]] == -1) {
            a[s[i]] = i;
        }
        else {
            int idx = a[s[i]];
            if (idx >= start) {
                LengthMax = max(LengthMax, i - start);
                start = idx + 1;
            }
            a[s[i]] = i;
        }
    }
    LengthMax = max(LengthMax, (int)s.length() - start);
    cout << LengthMax;
    return 0;
}