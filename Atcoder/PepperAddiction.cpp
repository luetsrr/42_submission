#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m, a, b;
    int ans = 0;

    cin >> n >> m;
    vector<int> c(m);
    rep(i, m)
        cin >> c[i];
    vector<int> p(m);
    rep(i, n)
    {
        cin >> a >> b;
        p[a - 1] += b;
    }
    rep(i, m)
        ans += min(c[i], p[i]);
    cout << ans << endl;
    return (0);
}