#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int H;
    int W;
    int n;
    cin >> H >> W >> n;

    vector<int> h(n);
    vector<int> w(n);
    rep(i, n) cin >> h[i] >> w[i];
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int H, W, n;
    cin >> H >> W >> n;
    vector<int> h(n), w(n);
    rep(i, n) cin >> h[i] >> w[i];

    map<int, vector<int>> mph, mpw;
    rep(i, n) mph[h[i]].push_back(i);
    rep(i, n) mpw[w[i]].push_back(i);

    vector<bool> used(n);
    auto get = [&](map<int, vector<int>> &mp, int val)
    {
        vector<int> &is = mp[val];
        while (is.size() && used[is.back()]) is.pop_back();
        if (is.size() == 0) return -1;
        return is.back();
    };

    using P = pair<int, int>;
    vector<P> pos(n);
    int r = 1, c = 1;
    auto put = [&](int i)
    {
        pos[i] = P(r, c);
        used[i] = true;
        if (h[i] == H) W -= w[i], c += w[i];
        else H -= h[i], r += h[i];
    };

    rep(ni, n)
    {
        int i = get(mph, H);
        if (i == -1) i = get(mpw, W);
        put(i);
    }

    for (auto [r, c] : pos) cout << r << ' ' << c << endl;
    return 0;
}