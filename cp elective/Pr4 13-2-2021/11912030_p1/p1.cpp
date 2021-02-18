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
#ifndef ONLINE_JUDGE
    freopen("p1.txt", "r", stdin);

#endif
    test
    {
        cout << "test--> " << t << endl;
        ll n;
        cin >> n;
        ll array[n];
        forl(n)
        {
            cin >> array[i];
        }
        sort(array, array + n);
        ll left = 0, right = n - 1; // left and right pointer of array
        ll l_num = left, r_num = n - 1;
        ll sum, min_sum = INT_MAX;
        while (left < right) // till we traverse all elements from left or right
        {
            sum = array[right] + array[left];
            if (abs(sum) < abs(min_sum)) //abs() or absolute value tells us the distance of sum from zero
            {
                min_sum = sum;
                l_num = left; // maintaining track of left and right index where we found minimum abs
                r_num = right;
            }
            if (array[right] + array[left] > 0)
            {
                right--; // sum is already positive  we dec right ptr to get less value then left and dec the sum
            }
            else
            {
                left++;
            }
        }

        cout << " the min pais are :" << array[l_num] << " and " << array[r_num] << endl
             << "-----------------------------" << endl;
    }
}
