#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int sum = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            sum += (int)s[i] - 48;
        }
        cout << sum << endl;
    }
    return 0;

}