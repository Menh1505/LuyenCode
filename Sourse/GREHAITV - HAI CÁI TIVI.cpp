/*
http://vinhdinhcoder.net/Problem/Details/4878
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<long long, long long> channel;
    map<long long, long long>::iterator it;
    int n;
    cin >> n;

    long long l, r;
    bool res = true;
    for (int i = 0; i < n; ++i)
    {
        int check = 0;

        cin >> l >> r;
        if (res == false)
        {
            continue;
        }
        it = channel.find(l);

        if (it != channel.end())
        {
            auto it1 = it;
            check++;
            it--;
            while (it->second >= l || it != channel.begin())
            {
                if (l >= it->first && l <= it->second)
                {
                    check++;
                    break;
                }
                it--;
            }
            while (it1->first <= r && it1 != --channel.end())
            {
                it1++;
                if (r <= it->second && r >= it->first)
                {
                    check++;
                    break;
                }
                it++;
            }
            channel.insert({ l, r });
        }
        else
        {
            channel.insert({ l, r });
            it = channel.find(l);
            auto it1 = it;
            while (it->second >= l && it != channel.begin())
            {
                it--;
                if (it->first <= l && it->second >= l)
                {
                    check++;
                }
            }
            while (it1->first <= r && it1 != --channel.end())
            {
                it1++;
                if (it1->second >= r && it->first >= r)
                {
                    check++;
                }
            }
        }
        if (check == 2)
        {
            res = false;
        }

    }
    if (res == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }


    return 0;
}
