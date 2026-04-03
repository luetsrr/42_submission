#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    int m;
    int MAX = 0;
    long long sum = 0;
    int flag = 0;
    int eflag = 0;

    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
        MAX = max(MAX, a[i]);
        sum += a[i];
    }
    int k = n;
    for (m = MAX; m <= 2 * MAX; m++)
    {
        if (sum % m == 0)
        {
            vector<int> b = a;
            while (k > 0)
            {
                if (b[0] == m)
                {
                    b[0] = -1;
                    k--;
                }
                else
                {
                    for (int j = 1; j < k; j++)
                    {
                        if (b[j] == m - b[0])
                        {
                            b.erase(b.begin() + j);
                            b.erase(b.begin() + 0);
                            k -= 2;
                            eflag = 1;
                            break;
                        }
                    }
                    if (eflag == 0)
                        break;
                }
                eflag = 0;
            }
        }
        if (k == 0)
        {
            if (flag == 1)
                cout << " ";
            cout << m;
            flag = 1;
        }
        k = n;
    }
    cout << endl;
    return (0);
}