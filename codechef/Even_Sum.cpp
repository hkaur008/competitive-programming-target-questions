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
        ll n, x, sum = 0;
        cin >> n;
        forl(n)
        {
            cin >> x;
            sum = sum + x;
        }

        if (sum & 1)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}