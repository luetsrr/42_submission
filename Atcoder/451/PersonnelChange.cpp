#include "../bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(m, 0);
    vector<int> d(m, 0);

    rep(i, n)
    {
        cin >> a[i] >> b[i];
        c[a[i] - 1]++;
        d[b[i] - 1]++;
    }
    rep(i, m)
        cout << d[i] - c[i] << endl;
    return (0);
}