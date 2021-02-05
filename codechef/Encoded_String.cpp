#include <bits/stdc++.h>
using namespace std;
#define light                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define forl(i, k, n) for (long long i = k; i < n; i++)
#define ll long long int

int main()
{
    light;

    test
    {

        char array[16];
        int j = 0;
        for (char i = 'a'; i <= 'p'; i++)
        {
            array[j] = i;
            j++;
        }
        ll n;
        string code;
        cin >> n >> code;

        for (ll i = 0; i < n; i++)
        {
            string sub = code.substr(i, 4);

            cout << array[stoi(sub, 0, 2)];

            i = i + 3;
        }
        cout << endl;
    }
}