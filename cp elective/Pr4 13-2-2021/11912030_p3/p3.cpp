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

class min_heap
{

    int size;
    int *arr;

public:
    min_heap(int m, int input[]); // parameterised construct to initialise the object with default values

    void buildHeap();

    void heapify(int i);
};
min_heap::min_heap(int m, int input[]) // parameterised construct to initialise the object with default values
{
    size = m;
    arr = input; // now input array points to the arr of min hep class
    buildHeap(); // to build heap out of it
}
void min_heap::heapify(int i)
{
    if (i >= size / 2)
        return;
    int smallest;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    smallest = arr[left] < arr[i] ? left : i;
    if (right < size)
        smallest = arr[right] < arr[smallest]
                       ? right
                       : smallest;
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(smallest);
    }
}
void min_heap::buildHeap()
{
    // Calling Heapify for all non leaf nodes
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(i);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("p3.txt", "r", stdin);

#endif

    int n, k;
    cin >> n >> k;
    int file[n];
    forl(k)
    {
        cin >> file[i]; // reading first k elements of file only
    }

    min_heap *m = new min_heap(k, file);
    for (ll i = k; i < n; i++)
    {
        cin >> file[i];
        if (file[0] > file[i])
        {
            continue;
        }
        else
        {
            file[0] = file[i];
            m->heapify(0);
        }
    }
    cout << " k largest elements   ";
    for (int i = 0; i < k; i++)
    {
        cout << file[i] << " ";
    }
}
