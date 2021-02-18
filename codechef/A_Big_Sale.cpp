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
        float loss = 0;
        float cost, quantity, discount;
        forl(n)
        {
            cin >> cost >> quantity >> discount;
            float new_cost = cost + (cost * (double)discount / 100.00);
            float new_cost_dec = new_cost - (new_cost * (double)discount / 100.00);
            loss = loss + (cost - new_cost_dec) * quantity;
        }
        cout << fixed << setprecision(4) << loss
             << endl;
    }
}