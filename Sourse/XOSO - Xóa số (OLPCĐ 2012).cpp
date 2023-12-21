/*
http://ntucoder.net/Problem/Details/68?fbclid=IwAR0N3k-3p9KRD7Y32bfDY3AT0GmPSH0OZtc0MekkS1pAHGsadUpfzbEIfIg
*/
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long cntEven = 0, sum = 0;
    int temp = n;
    while (temp--) {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 == 0) {
            cntEven++;
        }
    }
    long long cntOdd = n - cntEven;
    if (sum % 2 != 0) {
        cout << cntEven * cntOdd;
    }
    else {
        cout << (cntEven * (cntEven - 1)) / 2 + (cntOdd * (cntOdd - 1)) / 2;
    }
    return 0;
}