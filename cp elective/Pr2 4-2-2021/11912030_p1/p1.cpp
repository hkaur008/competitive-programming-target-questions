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

void brute_force(int arr[], int n)
{

    int product = 1;

    // generating  subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                product = product * arr[k];
        }
    }

    cout << product << endl;
}

void efficient_approach(int arr[], int n)
{

    int final = 1;

    for (int i = 0; i < n; i++)
    {
        long long int product = 1;
        for (int j = i; j < n; j++)
        {
            product = product * arr[j];
            final *= product; // supposing we are choosing pivot and then increase the 
            //length of the sub arraay and supposing it to be a new sub array when we increment for loop so
            // we have the product of previous subarray which is also part of new sub array , 
            //multipulying  product of all sub arrays to get final result
        }
    }

    cout << final << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test
    {

        int n;
        cin >> n;
        int array[n];
        forl(n)
        {
            cin >> array[i];
        }
        brute_force(array, n);
    }
}
// output expected:
// 27783000
// 11943936
// 1
