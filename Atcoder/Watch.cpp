#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;

    cin >> n;
    cout << n / 3600 << ":";
    n = n % 3600;
    cout << n / 60 << ":";
    n = n % 60;
    cout << n << endl;
    return (0);
}