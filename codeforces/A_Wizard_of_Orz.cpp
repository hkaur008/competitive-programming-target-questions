#include <bits/stdc++.h>
using namespace std;
#define light                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test \
  int t;     \
  cin >> t;  \
  while (t--)
#define forl(i, k, n) for (long long i = k; i < n; i++)
#define ll long long int

int main()
{
  light;

  test
  {

    ll n, count = 0;
    cin >> n;

    while (count != n)
    {
      if (count == 0)
      {
        cout << "9";
      }
      if (count == 1)
        cout << "8";
      if (count >= 2)
        cout << (count + 7) % 10;
      count++;
    }
    cout << endl;
  }
}