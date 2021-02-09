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

void naive_approach(string array[], int n)
{
}

void efficient_approach(string array[], int n) //hashing
{
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Find_winner_of_an_election_where_votes_re_represented_as_candidate_names.txt", "r", stdin);
#endif

    test
    {
        int n;
        cin >> n;
        string array[n];
        for (auto &e : array)
        {
            cin >> e;
        }
        naive_approach(array, n);
        cout << "=========================" << endl;
    }
}