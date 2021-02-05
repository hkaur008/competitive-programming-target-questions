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

class graph
{
    unordered_map<string, list<pair<string, int>>> l;

public:
    void addEdge(string x, string y, bool bidir, int wt)
    {
        l[x].push_back(make_pair(y, wt));
        if (bidir)
        {
            l[y].push_back(make_pair(x, wt));
        }
    }

    void printlist()
    {
        for (auto alist : l)
        {
            cout << alist.first;
            for (auto k : alist.second)
            {
                cout << "<---(" << k.first << "," << k.second << ") ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g;
    g.addEdge("a", "b", true, 10);
    g.addEdge("c", "d", true, 10);
    g.addEdge("a", "e", true, 20);
    g.addEdge("c", "a", false, 60);
    g.addEdge("e", "b", true, 50);
    g.printlist();
}