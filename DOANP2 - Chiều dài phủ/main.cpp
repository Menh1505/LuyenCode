/*
http://ntucoder.net/Problem/Details/3333
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long st, ed;
    long long* arr_st = new long long[n];
    long long* arr_ed = new long long[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> st >> ed;
        arr_st[i] = st;
        arr_ed[i] = ed;
    }

    sort(arr_st, arr_st + n);
    sort(arr_ed, arr_ed + n);
    st = arr_st[0];
    ed = arr_ed[0];

    long long sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr_ed[i - 1] - arr_st[i] >= 0)
        {
            ed = arr_ed[i];
        }
        else
        {
            sum += ed - st;
            st = arr_st[i];
            ed = arr_ed[i];
        }
    }
    if (arr_ed[n - 2] - arr_st[n - 1] < 0)
    {
        sum += arr_ed[n - 1] - arr_st[n - 1];
    }
    else
    {
        sum += ed - st;
    }
    cout << sum;

    return 0;
}

/*
Bài giải

int main(){
    int n, s, d;
    map<int, int> mp;
    map<int, int>::iterator it;
    cin >> n;
    while(n--){
        cin >> s >> d;
        it = mp.find(s);
        if(it != mp.end()){
            it->second = max(it->second, d);
        }
        else{
            mp[s] = d;
        }
    }
    it = mp.begin();
    long long sum = it->second - it->first;
    int Max = it->second;
    for(++it; it != mp.end(); ++it){
        if(it->first >= Max){
            sum += it->second - it->first;
        }
        else if(it->second > Max){
            sum += it->second - Max;
        }
        Max = max(Max, it->second);
    }
    cout << sum;
    return 0;
}
*/