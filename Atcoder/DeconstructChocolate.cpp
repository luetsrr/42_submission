#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int H, W, n;
    int type, x;

    cin >> H >> W >> n;
    rep(i, n)
    {
        cin >> type >> x;
        if (type == 1)
        {
            cout << x * W << endl;
            H -= x;
        }
        if (type == 2)
        {
            cout << x * H << endl;
            W -= x;
        }
    }
    return (0);
}