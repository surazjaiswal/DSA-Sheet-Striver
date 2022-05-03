#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll crossInversion(ll *a, ll l, ll h)
{
    ll mid = (l + h) / 2;
    ll i = l, j = mid + 1, k = l;
    ll count = 0;
    ll tempArr[10000];

    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            tempArr[k++] = a[i++];
        }
        else
        {
            tempArr[k++] = a[j++];
            count += mid - i + 1;
        }
    }
    while (i <= mid)
        tempArr[k++] = a[i++];
    while (j <= h)
        tempArr[k++] = a[j++];

    // copy all the elements of temp in arr
    for (ll i = 0; i <= h; i++)
        a[i] = tempArr[i];

    return count;
}

int inversionCount(ll *arr, ll l, ll h)
{
    // using merge sort concept
    // base case
    if (l >= h)
        return 0;

    // rec case if array contains 2 or more elements
    ll mid = (l + h) / 2;
    ll x = inversionCount(arr, l, mid);
    ll y = inversionCount(arr, mid + 1, h);
    ll z = crossInversion(arr, l, h);
    return x + y + z;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << inversionCount(arr, 0, n - 1) << endl;
    }

    return 0;
}