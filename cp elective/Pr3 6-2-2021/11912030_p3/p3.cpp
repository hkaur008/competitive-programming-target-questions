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
{ // Declaring forward list for nuts
    forward_list<char> nuts;

    // Declaring another forward list for bolts
    forward_list<char> bolts;
    nuts.assign({'@', '#', '$', '%', '^', '&'});
    bolts.assign({'$', '%', '&', '^', '@', '#'});

    for (auto &c : nuts)
    {

        bolts.remove(c);
        bolts.push_front(c); // not getting the correct approach
    }
    bolts.reverse();
    for (auto &c : nuts)
        cout << c << " ";
    cout << endl;
    for (auto &c : bolts)
        cout << c << " ";
    cout << endl;
}

// output
// @ # $ % ^ &
// @ # $ % ^ &