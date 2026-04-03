#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, q, k;
    int flag = 0;

    cin >> n >> q;
    vector<int> a(n);
    rep(i, n)
        cin >> a[i];
    vector<int> ans(q, 1);
    rep(j, q)
    {
        cin >> k;
        vector<int> b(k);
        rep(i, k)
            cin >> b[i];
        int m = 0;
        rep(i, n)
        {
            if (m < k)
            {
                if (i != b[m] - 1)
                {
                    if (flag == 0)
                    {
                        ans[j] = a[i];
                        flag = 1;
                    }
                    else
                        ans[j] = min(ans[j], a[i]);
                }
                else
                    m++;
            }
            else
                ans[j] = min(ans[j], a[i]);
        }
        flag = 0;
    }
    rep(i, q)
        cout << ans[i] << endl;
    return (0);
}