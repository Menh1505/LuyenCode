/*
https://luyencode.net/problem/LKNGOAC
*/
#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<int> res;
    for (int i = 0; i < (int)s.length(); ++i)
    {
        if (s[i] == '(')
        {
            res.push(i);
        }
        if (s[i] == ')')
        {
            cout << res.top() + 1 << " " << i + 1 << endl;
            res.pop();
        }
    }
    return 0;
}