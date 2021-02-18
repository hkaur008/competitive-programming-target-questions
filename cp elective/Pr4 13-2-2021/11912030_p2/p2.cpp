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
/* Standard Binary Search function*/
int binarySearch(ll arr[], int low,
                 int high, int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);

    // else
    return binarySearch(arr, low, (mid - 1), key);
}

ll pivot(ll array[], ll start, ll finish) //pivot point is a point a
{
    if (finish - start == 0)
        return start; // we are having single element in subarray so return it
    else if (start == finish - 1)
    {
        if (array[start] >= array[finish]) // 2 elements in subarray so return the largest one
            return start;
        else
            return finish;
    }
    else
    {
        ll mid = start + (finish - start) / 2;
        if (array[start] >= array[mid])
            return pivot(array, start, mid);
        else
            return pivot(array, mid, finish);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("p2.txt", "r", stdin);

#endif
    test
    {
        cout << "test--> " << t << endl;
        ll n, k; //find k
        cin >> n >> k;
        ll array[n];
        forl(n)
        {
            cin >> array[i];
        }

        ll pi = pivot(array, 0, n - 1);
        cout << "pivot :" << pi << endl;
        if (array[pi] == k)
            cout << " index of element is " << pi << endl; // as element at pivot is the key we need to find so we print it
        else if (array[pi] <= k)
        {
            cout << " index of element is " << binarySearch(array, 0, pi - 1, k) << endl;
        }
        else
        {
            cout << " index of element is " << binarySearch(array, pi + 1, n - 1, k) << endl;
        }
    }
}
