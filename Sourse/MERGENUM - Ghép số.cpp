/*
http://ntucoder.net/Problem/Details/5621?fbclid=IwAR21ITfQ4umFdDpLgFTVMJaxeRIGq6_G6wri-pq3-FFxRotfbLeGh5TQwpI
*/

#include<iostream>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int length_x = (int)x.length();
    int length_y = (int)y.length();
    int n = length_x + length_y;
    int sz = (int)pow(2.0, n);
    string Max = x + y, Min = x + y;
    for (int i = 0; i < sz; ++i) 
    {
        int* a = new int[n];
        memset(a, 0, n);
        int j = n - 1;
        int temp = i;
        int cnt1 = 0;
        while (temp != 0) 
        {
            a[j] = temp % 2;
            temp /= 2;
            if (a[j] == 1) 
            {
                cnt1++;
            }
            j--;
        }
        if (cnt1 == length_y) 
        {
            string s;
            int k = 0, l = 0;
            for (j = 0; j < n; ++j) 
            {
                if (a[j] == 0) 
                {
                    s.push_back(x[k++]);
                }
                else 
                {
                    s.push_back(y[l++]);
                }
            }
            Max = max(Max, s);
            Min = min(Min, s);
        }
    }
    cout << Min << endl << Max;
    return 0;
}