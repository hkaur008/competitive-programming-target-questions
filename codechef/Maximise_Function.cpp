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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &it : arr)
        {
            cin >> it;
        }
        sort(arr.begin(), arr.end());
        cout << abs(arr[n - 1] - arr[0]) + abs(arr[0] - arr[n - 2]) + abs(arr[n - 2] - arr[n - 1]) << endl;
    }
}