#include <bits/stdc++.h>
using namespace std;
#define light                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long;
int main()
{
    light;
    long long t;
    cin >> t;
    while (t--)
    {
        long long w, h, n, a, count = 1;
        cin >> w >> h >> n;
        a = w * h;
        while ((a) % 2 == 0)
        {
            count = count * 2;
            a = a / 2;
        }

        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            /* code */
            cout << "NO" << endl;
        }
    }
}