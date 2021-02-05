#include <bits/stdc++.h>
using namespace std;
#define light                       \
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
    long long one = 0, two = 0, n, x;
    cin >> n;
    while (n--)
    {
      cin >> x;
      if (x == 1)
        ++one;
      else
      {
        ++two;
      }
    }

    if ((one % 2 == 0) && (two % 2 == 0))
    {
      cout << "YES" << endl;
    }
    else if ((one % 2 == 0) && (two % 2 != 0) && one && two)
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