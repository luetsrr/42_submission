#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, x;

    cin >> n >> x;
    vector<int> a(n);
    rep(i, n)
        cin >> a[i];
    rep(i, n)
    {
        if (a[i] < x)
        {
            x = a[i];
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return (0);
}