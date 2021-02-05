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
template <typename T>
class graph
{
    map<T, list<T>> l;

public:
    void addedge(T x, T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs(T src)
    {
        
    }
};

int main()
{
}