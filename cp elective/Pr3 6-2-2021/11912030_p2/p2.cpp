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

void maintaining_index(vector<int> arr, int n)
{

    int flag = 0;
    int greatest[n];                 // maintaing index at which greatest of current num exist of all the number ;
    greatest[n - 1] = -1;            //no greatest from last element so -1;
    for (int i = n - 2; i >= 0; i--) // travesing from last of array starting from second last
    {
        if (arr[i] < arr[i + 1]) // if current number is less than its successor then its successor is its nge
        {

            greatest[i] = i + 1; //its greatest is at index i+1;
        }
        if (arr[i] > arr[i + 1]) // if current number is less than its successor then its successor is its nge
        {
            if (greatest[i + 1] == -1)
            {

                greatest[i] = -1; // if  a smaller success sucessor doesnot has nge than current also dont have nge
            }
            else
            {
                int j = i + 1;
                while (j <= n - 1 && arr[i] > arr[j])
                {
                    if (greatest[j] == -1)
                    {
                        cout << arr[i] << "'s NGE = -1" << endl;
                        greatest[i] = -1; // if  a sucessor doesnot has nge than current also dont have nge
                        break;
                    }
                    if (arr[i] > arr[greatest[j]])
                    {
                        j = greatest[j];
                    }
                    if (arr[i] < arr[greatest[j]])
                    {
                        greatest[i] = greatest[j];
                    }
                }
            }
        }
    }
    forl(n)
    {
        cout << arr[i] << "'s NGE =" << arr[greatest[i]] << endl;
    }
}
void output_array_used(vector<int> arr, int n)
{
    int output[n];

    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && s.top() <= arr[i])
            s.pop();

        if (s.empty())
            output[i] = -1;
        else
            output[i] = s.top();

        s.push(arr[i]); // current element is the can have nge
    }

    forl(n)
    {
        cout << arr[i] << "'s NGE = " << output[i] << endl;
    }
}

void output_array_not_used(vector<int> arr, int n)
{ // // as we are traversing backward so  we are maintain array of greatest element only
    // if current is less than top , righ most element greater than current is top;
    //  if current element is greater than top of stack when have to move right of array as it w may contain nge,
    //  we only need those numbers in stack which are greater than our cuurent , because we will have to look in right part
    //  in subsequent steps only if our next current element is greater than our prsent current , we dont have to look for numbers less than our present
    //  index_sequenceso popping all the elments less than cuureent

    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && s.top() <= arr[i])
            s.pop();

        if (s.empty())
            cout << arr[i] << "'s NGE = -1" << endl;
        else
            cout << arr[i] << "'s NGE = " << s.top() << endl;

        s.push(arr[i]); // current element is the can have nge
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

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
        output_array_not_used(array, n);
    }
}
