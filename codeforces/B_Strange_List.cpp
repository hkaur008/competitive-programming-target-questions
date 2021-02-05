#include <bits/stdc++.h>
using namespace std;
#define light                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test     \
    long long t; \
    cin >> t;    \
    while (t--)
#define forl(i, k, n) for (long long i = k; i < n; i++)
#define ll long long

ll robot(ll q, ll x, ll a)
{
    if (q % x == 0)
    {

        return robot(q / x, x, a) + a;
    }
    else
    {
        return 0;
    }
}

int main()
{
    light;

    test
    {

        ll n, x, sum = 0;
        cin >> n >> x;
        int a;
        forl(i, 0, n)
        {
            cin >> a;
            sum = sum + a + robot(a, x, a);
        }

        cout << sum << endl;
    }
}