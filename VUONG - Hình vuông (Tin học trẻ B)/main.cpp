/*
http://lequydon.ntucoder.net/Problem/Details/5891?fbclid=IwAR07VCQVMiOZY4_jLEYEiTSLV1sGXBxENpeImmJzNlk-WxJ1xbQz8WORmoQ
*/
#include <iostream>
using namespace std;

int main() 
{
    long long n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    cout << (long long)pow(2, n - 1) * (a + b + c + d);
    return 0;
}