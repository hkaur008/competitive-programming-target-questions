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

int main()
{
    test
    {
        ll n, k, sum, bot = 1, x, solved = 0, tooslow = 0, maxtime = -1;
        cin >> n >> k;

        forl(n)
        {
            cin >> x;
            if (x != -1)
                solved++;
            if (x > k)
                tooslow = 1;

            maxtime = max(x, maxtime);
        }

        if (solved < ceil((double)n / 2))
        {
            cout << "Rejected" << endl;
        }
        else if (tooslow)
        {
            cout << "Too Slow" << endl;
        }
        else if (solved == n && maxtime <= 1)
        {
            cout << "Bot" << endl;
        }
        else
        {
            cout << "Accepted" << endl;
        }
    }
}