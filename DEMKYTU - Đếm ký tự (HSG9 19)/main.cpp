/*
http://lequydon.ntucoder.net/Problem/Details/6082?fbclid=IwAR1mTQp3p2wPaaWP0VXJeVFXiNnzfguzkjvhKIjTU9fDZXKOQGyp2-f9vv8
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int res = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < (int)s.length(); ++i) {
        bool check = true;
        if (i - 1 >= 0 && s[i - 1] == s[i]) {
            check = false;
        }
        if (i + 1 < (int)s.length() && s[i + 1] == s[i]) {
            check = false;
        }
        if (check == true) {
            res++;
        }
    }
    cout << res;
    return 0;
}