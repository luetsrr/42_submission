#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int k;
    int l;
    int ans = 0;

    cin >> k >> l;
    auto get = [](int n)
    {
        string s = to_string(n);
        int m = s.size();
        int count = 0;

        rep(i, m)
            count += s[i] - '0';
        return (count);
    };
    rep(i, k + 1)
    {
        if (get(i) == l)
            ans++;
    }
    cout << ans << endl;
    return (0);
}