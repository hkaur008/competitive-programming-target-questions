// C++ program for the above approach

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
#define ll long long

// Driver code
int main()
{
    light;

    test
    {
        ll cond[4] = {0};

        string str;
        cin >> str;
        if (str.length() >= 10)
        {
            int i = 0;
            while (i != str.length())
            {
                if (cond[0] == 1 && cond[1] == 1 && cond[2] == 1 && cond[3] == 1)
                {
                    break;
                }
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    cond[0] = 1;
                }
                if (str[i] >= 'A' && str[i] <= 'Z' && i > 0 && i < str.length() - 1)
                {
                    cond[1] = 1;
                }
                if (str[i] >= '0' && str[i] <= '9' && i > 0 && i < str.length() - 1)
                {
                    cond[2] = 1;
                }
                if ((str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?') && (i > 0 && i < str.length() - 1))
                {
                    cond[3] = 1;
                }
                i++;
            }
            if (cond[0] + cond[1] + cond[2] + cond[3] == 4)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
