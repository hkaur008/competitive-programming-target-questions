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
#define forl(n) for (ll i = 0; i < n; i++)
#define M5 100005
#define M6 1000005
#define endl "\n"

int main()
{
    test
    {

        ll n, count = 0;
        ll array[1005];
        cin >> n;
        string X, Y;
        cin >> X >> Y;
        forl(n + 1)
        {
            cin >> array[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (X[i] == Y[i])
            {
                ++count;
            }
        }

        if (count == n)
        {
            cout << array[n] << endl;
        }
        else
        {
            ll total = 0;
            for (ll k = 0; k <= count; k++)
            {
                total = max(total, array[k]);
            }

            cout << total << endl;
        }
    }
}