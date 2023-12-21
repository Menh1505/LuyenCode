/*https://oj.luyencode.net/problem/DCTDN1 */
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[1000 + 1], f[1000 + 1], res = 0;
    f[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        int idxMax = 0;
        for (int j = 1; j < i; ++j) {
            if (a[j] < a[i] && f[j] > f[idxMax]) {
                idxMax = j;
            }
        }
        f[i] = f[idxMax] + 1;
        res = max(res, f[i]);
    }
    cout << res;
    return 0;
}