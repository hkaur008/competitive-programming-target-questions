//https://www.hackerearth.com/problem/algorithm/range-sum-4/submissions/

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
void naive_approach()
{
    ll n;
    cin >> n;
    ll array[n];
    for (auto &e : array)
    {
        cin >> e;
    }

    ll q;
    cin >> q;
    forl(q)
    {
        ll l, sum = 0, r;
        cin >> l >> r;
        for (ll k = l - 1; k <= r - 1; k++)
        {
            sum = sum + array[k];
        }

        cout << sum << endl;
    }
}

void efficient_approach() //prefix sum
{
    ll n;
    cin >> n;
    ll array[n], prefix[n];
    for (auto &e : array)
    {
        cin >> e;
    }
    prefix[0] = array[0];
    for (ll i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + array[i];
    }
    ll q;
    cin >> q;
    forl(q)
    {
        ll l, r;
        cin >> l >> r;

        if (l - 2 >= 0)
        {
            cout << prefix[r - 1] - prefix[l - 2] << endl;
        }
        else
        {
            cout << prefix[r - 1] << endl;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("range_sum.txt", "r", stdin);
#endif

    test
    {
        efficient_approach();
    }
}

//FENWICK TREE ALSO A METHOD