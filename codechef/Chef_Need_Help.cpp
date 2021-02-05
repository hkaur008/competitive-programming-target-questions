#include <bits/stdc++.h>
using namespace std;
#define light                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define forl(k, n) for (ll i = k; i <= n; i++)
#define M5 100005
#define M6 1000005
#define endl "\n"
int main()
{
    light;

    test
    {
        unsigned ll n, rem = 0;
        cin >> n;
        rem = n & (3);

        if (rem == 0)
        {
            cout << n << endl;
        }
        else if (rem == 1)
            cout << "1"
                 << endl;
        else if (rem == 2)
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << "0"
                 << endl;
        }
    }
}