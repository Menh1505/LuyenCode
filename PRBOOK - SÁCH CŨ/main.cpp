/*
http://vinhdinhcoder.net/Problem/Details/5363
*/

#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, a[10];
    cin >> s;

    long long sz = (long long)s.length(), sum = 0;

    for (long long i = 0; i < sz; ++i)
    {
        sum += (int)s[i] - 48;
        a[(int)s[i] - 48].push_back(s[i]);
    }

    if ((sum % 3 != 0) || (a[0] == ""))
    {
        cout << -1;
    }
    else
    {
        for (int i = 9; i >= 0; --i)
        {
            cout << a[i];
        }
    }
    return 0;
}
/*
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, a[10];
    cin >> s;
    int sum = 0;
    for(int i = 0; i < (int)s.length(); ++i){
        int x = s[i] - 48;
        a[x].push_back(s[i]);
        sum += x;
    }
    if(a[0] == "" || sum % 3 != 0){
        cout << -1;
    }
    else{
        for(int i = 9; i >= 0; --i){
            cout << a[i];
        }
    }
    return 0;
}
*/