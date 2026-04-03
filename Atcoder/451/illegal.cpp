#include "../bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;

    cin >> s;
    if (s.size() % 5 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return (0);
}