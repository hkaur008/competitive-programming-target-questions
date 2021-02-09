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

        ll n, count = 0, total = 0;
        ll array[1005];
        cin >> n;
        string X, Y;
        cin >> X >> Y;
        forl(n + 1)
        {
            cin >> array[i];
        }
        ll i;
        for (i = 0; i < n; i++)
        {
            if (X[i] == Y[i])
            {
                ++count;
            }
            else
            {
                break;
            }
        }
        ll j;
        for (j = n - 1; j > i; j--)
        {
            if (X[j] == Y[j])
            {
                ++count;
            }
            else
            {
                break;
            }
        }
        total = max(count, total);
        count = 0;
        for (ll k = i + 1; k < j; k++)
        {
            if (X[k] == Y[k])
            {
                ++count;
            }
            else
            {
                total = max(count, total);
                count = 0;
            }
        }
        total = max(count, total);
        cout << array[total] << endl;
    }
}