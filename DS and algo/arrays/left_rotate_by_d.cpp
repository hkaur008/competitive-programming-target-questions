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
#define forl(k, n) for (ll i = k; i < n; i++)
#define M5 100005
#define M6 1000005

void leftRotatBy1(int array[], int n)
{
    int temp = array[0];
    forl(1, n)
    {
        array[i - 1] = array[i];
    }
    array[n - 1] = temp;
    forl(0, n)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int n = 5;

    leftRotatBy1(array, n);
}