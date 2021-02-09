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

void brute_force(vector<int> arr, int n)
{

    int flag = 0;

    for (int i = 0; i < n; i++) // choosing one index for which we need a NGE
    {
        flag = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j]) // transversing from i till we find a greatest element
            {
                cout << arr[i] << "'s NGE = " << arr[j] << endl;
                flag = 1; // if found nge then flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << arr[i] << "'s NGE =  -1" << endl;
        }
    }
}

void efficient_approach(vector<int> arr, int n)
{

    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {

        // poping till current element is greater than top of stack
        while (!s.empty() && arr[i] > s.top()) //empty check is must otherwise top will give runtime error
        {

            cout << s.top() << "'s NGE = " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]); // push current element as we need to NGE find for current ELEMENT NOW
    }
    while (!s.empty())
    {
        cout << s.top() << "'s NGE = -1" << endl;
        s.pop();
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    test
    {
        cout << "test--> " << t << endl;
        int n;
        cin >> n;
        vector<int> array(n);
        forl(n)
        {
            cin >> array[i];
        }
        efficient_approach(array, n);
    }
}
