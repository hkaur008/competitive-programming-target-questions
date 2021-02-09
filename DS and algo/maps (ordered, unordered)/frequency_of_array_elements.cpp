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

void naive_approach(int array[], int n)
{
    bool visited[n];
    memset(visited, false, n);
    for (int i = 0; i < n; i++)
    {

        if (!visited[i])
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    ++count;
                    visited[j] = true;
                }
            }

            cout << array[i] << " is freq -->" << count << endl;
        }
    }
}

void efficient_approach(int array[], int n) //hashing
{
    unordered_map<int, int> mp;
    forl(n)
    {
        mp[array[i]]++; // finding map key if found increase the value , else initiate it with zero and then incease it
    }
    for (auto x : mp)
    {
        cout << x.first << "--freq-> " << x.second << endl; //printing map values
    }
}
void hashing_inorder(int array[], int n) // as the type of input give
{
    unordered_map<int, int> mp;
    forl(n)
    {
        mp[array[i]]++; // finding map key if found increase the value , else initiate it with zero and then incease it
    }
    forl(n)
    {
        if (!(mp[array[i]] == -1))
        {
            cout << array[i] << "--freq-> " << mp[array[i]] << endl;
            mp[array[i]] = -1;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("frequency_of_array_elements.txt", "r", stdin);
#endif

    test
    {
        int n;
        cin >> n;
        int array[n];
        for (auto &e : array)
        {
            cin >> e;
        }
        hashing_inorder(array, n);
        cout << "--test----" << endl;
    }
}