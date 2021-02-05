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
#define forl(k, n) for (long long i = k; i < n; i++)
#define ll long long int

// Driver code
int main()
{
	test
	{

		ll n, k, x, y;
		cin >> n >> k >> x >> y;
		ll xior[100005], yor[100005];

		if (x == y)
		{
			cout << n << " " << n << endl;
		}
		else if (x < y)
		{
			xior[0] = n - (y - x);
			yor[0] = n;

			xior[1] = n;
			yor[1] = xior[0];

			xior[2] = y - x;
			yor[2] = 0;

			xior[3] = 0;
			yor[3] = y - x;

			cout << (xior[(k - 1) % 4] + " " + yor[(k - 1) % 4]) << endl;
		}
		else
		{
			xior[0] = n;
			yor[0] = n - (x - y);

			xior[1] = yor[0];
			yor[1] = n;

			xior[2] = 0;
			yor[2] = x - y;

			xior[3] = x - y;
			yor[3] = 0;

			cout << xior[(k - 1) % 4] << " " << yor[(k - 1) % 4] << endl;
		}
	}
}
