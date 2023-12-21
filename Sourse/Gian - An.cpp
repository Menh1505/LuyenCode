/*
http://ntucoder.net/Problem/Details/4421?fbclid=IwAR2Vf7fbxm55nk15nLAAH5Laf8a5dfPXwPux-l9uSoMStuErfI6VtwGkS24
*/

#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    int a[101][101];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                a[i][j] = 0;
            }
            else {
                int x;
                cin >> x;
                a[i][j] = x + max(a[i - 1][j], a[i][j - 1]);
            }
        }
    }
    cout << a[m][n];
    return 0;
}