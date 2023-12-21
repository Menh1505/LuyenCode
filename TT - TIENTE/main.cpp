/*
http://ntucoder.net/Problem/Details/4420?fbclid=IwAR3FrCYjwgnPHDy2c4L9o3QQGswf15dlm7El2Deo-GrFDFo03a9Md_MK9VU
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        sum += t[i];
    }
    if (sum % 2 != 0) {
        cout << "khong chia duoc";
    }
    else {
        int sz = (int)pow(2.0, n);
        vector<vector<int>> res;
        for (int i = 0; i < sz; ++i) {
            int sumB = 0;
            int temp = i, j = n - 1;
            vector<int> a(n, 0);
            while (temp != 0) {
                a[j] = temp % 2;
                temp /= 2;
                if (a[j] == 1) {
                    sumB += t[j];
                }
                j--;
            }
            if (sumB * 2 == sum) {
                res.push_back(a);
            }
        }
        if ((int)res.size() == 0) {
            cout << "khong chia duoc";
        }
        else {
            cout << (int)res.size();
            for (int i = 0; i < (int)res.size(); ++i) {
                cout << "\n";
                for (int j = 0; j < (int)res[i].size(); ++j) {
                    cout << (res[i][j] == 0 ? "A " : "B ");
                }
            }
        }
    }
    return 0;
}
