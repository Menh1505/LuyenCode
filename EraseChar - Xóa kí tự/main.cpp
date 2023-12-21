/*
http://vinhdinhcoder.net/Problem/Details/5358?fbclid=IwAR2CG4nwRPGG3Tr1bA-a__BSgAqUVdbivCQaAiTunzbBxTdKssUDqVCuquk
*/
#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int max = -1, l, r;
    int res_sz = n - k;
    for (int i = 0; i <= n - k; ++i)
    {
        l = i;
        r = i + res_sz - 1;
        bool check = true;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                check = false;
                break;
            }
            l++;
            r--;
        }
        if (check == true)
        {
            for (int j = i; j <= i + res_sz - 1; ++j)
            {
                cout << s[j];
            }
            return 0;
        }
    }
    cout << "No";
    return 0;
}