#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) a[i]--;

    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == i)
            ans[i] = i;
        else
            ans[i] = ans[a[i]];
    }

    rep(i, n) cout << ans[i] + 1 << ' ';
    cout << endl;
    return 0;
}
