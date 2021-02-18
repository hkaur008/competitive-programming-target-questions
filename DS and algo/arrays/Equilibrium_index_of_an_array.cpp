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
void naive_approach(ll array[], ll n) //o(n^2)
{
    for (int j = 0; j < n; j++) //o(n)
    {
        ll left = 0, right = 0; //(o(j+n))
        for (int k = j + 1; k < n; k++)
        {
            right = right + array[k];
        }
        for (int k = 0; k < j; k++)
        {
            left = left + array[k]; //o(j)
        }
        if (left == right)
        {
            cout << array[j] << endl;
        }
    }
}
void efficient_approach(ll array[], ll n) //o(n +n)==o(n)
{

    ll prefix[n];
    prefix[0] = array[0];
    for (int j = 1; j < n; j++) //o(n)
    {
        prefix[j] = prefix[j - 1] + array[j];
    }
    for (int k = 1; k < n - 1; k++) //o(n)
    {
        if (prefix[k - 1] == prefix[n - 1] - prefix[k])
        {
            cout << array[k] << endl;
        }
    }
}
void best_approach(int arr[], int n)
{

    int sum = 0;

    int leftsum = 0;

    for (int i = 0; i < n; ++i) // o(n)
        sum += arr[i];

    for (int i = 0; i < n; ++i) // o(n)
    {

        // sum is now right sum
        // for index i
        sum -= arr[i];

        if (leftsum == sum)
            cout << arr[i] << endl;

        leftsum += arr[i];
    }

    cout << -1 << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Equilibrium_index_of_an_array.txt", "r", stdin);
#endif
    test
    {
        ll n;
        cin >> n;
        ll array[n];
        for (auto &e : array)
        {
            cin >> e;
        }
        efficient_approach(array, n);
    }
}