/*
http://ntucoder.net/Problem/Details/103?fbclid=IwAR2f8HAgXtKFS7eZZ5boyfOPz8egF55MEsvjWipyuzvFhDz2JxX_rRo3-fg
*/
#include<iostream>
#include<math.h>
using namespace std;

/*
void gen(int A[], int n)
{
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i)
    {
        if (A[i] > 1)
        {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}

void xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int* A = new int[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = 0;
    }

    for (int i = 0; i < pow(2, n); i++)
    {
        xuat(A, n);
        gen(A, n);
    }
    return 0;
}
*/

int main()
{
    int n;
    cin >> n;

    int* A = new int[n + 1];

    for (int i = 1; i <= n; i++)
    {
        A[i] = 0;
    }

    int i = n;
    while(i)
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << A[i];
        }
        cout << endl;
        i = n;
        while ((i > 0) && (A[i] == 1))
        {
            i--;
        }
        if (i > 0)
        {
            A[i] = 1;
            for (int j = i + 1; j <= n; ++j)
            {
                A[j] = 0;
            }
        }
    }
    return 0;
}