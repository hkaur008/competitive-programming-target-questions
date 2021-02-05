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
void addEdge(vector<ll> glist[], ll u, ll v)
{
    glist[u].push_back(v);
    glist[v].push_back(u);
}
int main()
{
    int V = 5;           //vertex
    vector<ll> glist[V]; //vector array
    addEdge(glist, 0, 1);
    addEdge(glist, 0, 4);
    addEdge(glist, 1, 2);
    addEdge(glist, 1, 3);
    addEdge(glist, 1, 4);
    addEdge(glist, 2, 3);
    addEdge(glist, 3, 4);

    // printing list
    for (ll i = 0; i < V; i++)
    {
        auto it = glist[i].begin();
        cout << i << "--> ";
        while (it != glist[i].end())
        {
            cout << *it << "--> ";
            ++it;
        }
        cout << endl;
    }
}