#include<iostream>
#include <tuple>

using namespace std;

typedef unsigned long long ll;


pair<ll, ll> factor(ll n)
{
    ll s = 0;
    while ((n & 1) == 0)
    {
        s++;
        n >>= 1;
    }
    return { s, n };
}
ll pow(ll a, ll d, ll n)
{
    ll result = 1;
    a = a % n;
    while (d > 0)
    {
        if (d & 1) result = result * a % n;
        d >>= 1;
        a = a * a % n;
    }
    return result;
}

// Trả về false nếu n không phải là số nguyên tố.
bool test_a(ll s, ll d, ll n, ll a)
{
    if (n == a) return true;
    ll p = pow(a, d, n);
    if (p == 1) return true;
    for (; s > 0; s--) {
        if (p == n - 1) return true;
        p = p * p % n;
    }
    return false;
}

// Trả về true nếu n là số nguyên tố,
// false nếu n là hợp số.
bool miller(ll n)
{
    if (n < 2) return false;
    if ((n & 1) == 0) return n == 2;
    ll s, d;
    tie(s, d) = factor(n - 1);
    return test_a(s, d, n, 2) && test_a(s, d, n, 3);
}

long long prime(long long L, long long R)
{
    long long count = 0;
    for (int i = L; i <= R; i++)
    {
        if (miller(i)) count++;
    }
    return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long L, R, T;
	cin >> T;

	while (T--)
	{
		cin >> L >> R;
		cout << prime(L, R) << endl;
	}

	return 0;
}