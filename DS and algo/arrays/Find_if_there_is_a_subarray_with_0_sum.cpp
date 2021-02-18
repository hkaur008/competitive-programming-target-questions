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
    ll flag = 0;
    for (int j = 0; j < n; j++) //o(n)
    {
        ll sum = 0;
        for (int k = j; k < n; k++)
        {
            sum = sum + array[k];
            if (sum == 0)
            {
                cout << " true  " << j << "-" << k << endl;
                flag = 1;
            }
        }
    }
}
void other_approach(ll array[], ll n)
{

    ll prefix[n], flag = 0;
    prefix[0] = array[0];
    for (int j = 1; j < n; j++)
    {
        prefix[j] = prefix[j - 1] + array[j];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {
            if (j == 0 && prefix[j] == 0)
            {
                cout << " true  " << j << "-" << k << endl;
                flag = 1;
            }
            else if (prefix[k] - prefix[j - 1] == 0)
            {
                cout << " true  " << j << "-" << k << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << " false" << endl;
    }
}
int efficient_approach(ll array[], ll n) // if prefix is same or prefix sum = 0 then we have subarray with  0 sum
{
    unordered_set<int> sumSet;
    ll sum = 0;
    for (int j = 1; j < n; j++)
    {
        sum = sum + array[j];
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
        {
            cout << " true" << endl;
            return 1;
        }
        sumSet.insert(sum);
    }
    cout << "false" << endl;
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Find_if_there_is_a_subarray_with_0_sum.txt", "r", stdin);
#endif
    test
    {
        cout << "-------------------------------------------" << endl;
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