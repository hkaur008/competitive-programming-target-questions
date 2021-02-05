// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;
#define light                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define forl(n) for (long long i = 0; i < n; i++)
#define ll long long int
ll ans[1000006] = {0};

int main()
{
    light;
    bool prime[1000006];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    vector<ll> sieve;
    ll N = 2;
    while (N * N <= 1000006)
    {
        if (prime[N])
        {
            sieve.push_back(N);
            for (ll i = N * N; i <= 1000006; i += N)
            {
                prime[i] = false;
            }
        }
        N++;
    }
    for (; N <= 1000006; ++N)
    {
        if (prime[N])
            sieve.push_back(N);
    }
    ll n = 5;
    test
    {
        ll m, count = 0;
        cin >> m;

        while (m >= n)
        {

            if (prime[n] && prime[n - 2])
            {
                ans[n] = ans[n - 1] + 1;
            }
            else
                ans[n] = ans[n - 1];
            n++;
        }

        cout << ans[m] << endl;
    }
}
