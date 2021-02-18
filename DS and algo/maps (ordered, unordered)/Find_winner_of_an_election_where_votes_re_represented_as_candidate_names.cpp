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

void naive_approach(int n)
{
    bool visited[n];
    memset(visited, false, n);
    string array[n];
    for (auto &m : array)
    {
        cin >> m;
    }
    ll max_votes = 0;
    string winner;
    forl(n)
    {
        if (!visited[i])
        {
            ll count = 1;
            for (ll j = i + 1; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    ++count;
                    visited[j] = true;
                }
            }
            if (count > max_votes)
            {
                max_votes = count;
                winner = array[i];
            }
            else if (count == max_votes && winner > array[i])
            {
                winner = array[i];
            }
        }
    }
    cout << winner << "---" << max_votes << endl;
}

void efficient_approach(int n) //hashing
{
    string x;
    unordered_map<string, int> mp;
    forl(n)
    {
        cin >> x;
        mp[x]++; //O(n * max_length_of_string)
    }
    ll max_votes = 0;
    string winner;
    for (auto m : mp)
    {
        if (m.second > max_votes)
        {
            max_votes = m.second;
            winner = m.first;
        }
        else if (m.second == max_votes)
        {
            if (m.first < winner)
            {
                winner = m.first;
            }
        }
    }
    cout << winner << endl;
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

        naive_approach(n);
        cout << "=========================" << endl;
    }
}