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
float format24()
{
    float hh;
    cin >> hh;
    char a = getchar();
    float mm;
    cin >> mm;
    string zone;
    cin >> zone;
    if (zone == "AM")
    {
        if (hh == 12)
        {
            hh = 0 + 0.01 * (mm);
        }
        else
        {
            hh = hh + 0.01 * (mm);
        }
    }
    else
    {
        if (hh == 12)
        {
            hh = 12 + 0.01 * (mm);
        }
        else
        {
            hh = hh + 12 + 0.01 * (mm);
        }
    }
    return hh;
}

int main()
{
    test
    {

        float meeting = format24();
        int n;
        cin >> n;
        float start, end;
        forl(n)
        {
            start = format24();
            end = format24();
            if (meeting >= start && meeting <= end)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}