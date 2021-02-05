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

void approach2(int array[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {

        swap(array[low], array[high]);
        high--;
        low++;
    }
    forl(n)
    {
        cout << array[i] << " ";
    }
}
void approach1(int array[], int n)
{

    forl(n / 2)
    {

        swap(array[i], array[n - i - 1]);
    }
    forl(n)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[] = {1, 0, 2, 0, 4, 3, 0, 5, 0, 1, 5};
    approach2(array, 11);
}