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
		ll n, m;
		cin >> n >> m;
		int arrm[100005], arrn[100005];

		ll totaln = 0, totalm = 0;

		forl(0, n)
		{
			cin >> arrn[i];
			totaln += arrn[i];
		}
		forl(0, m)
		{
			cin >> arrm[i];
			totalm += arrm[i];
		}

		if (totaln > totalm)
		{
			cout << "0" << endl;
		}
		else
		{

			sort(arrn, arrn + n);
			sort(arrm, arrm + m, greater<ll>());

			int count = 0;
			while (count < min(n, m) && totaln <= totalm)
			{

				totaln += (-arrn[count] + arrm[count]);
				totalm += (-arrm[count] + arrn[count]);
				count++;
			}

			if (totaln <= totalm)
				count = -1;

			cout << count << endl;
		}
	}
}