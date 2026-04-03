#include "../bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m;

    cin >> n;
    m = n;
    rep(i, m)
    {
        if (i == 0)
            cout << n;
        else
            cout << "," << n;
        n--;
    }
    return (0);
}