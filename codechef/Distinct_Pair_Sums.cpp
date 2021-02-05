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
		ll l, r, count;
		cin >> l >> r;
		cout << (2 * r + 1) - (2 * l) << endl;
	}
}
