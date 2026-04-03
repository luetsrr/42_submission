#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, L, R;
    int a, b, c, d, e, f, g, h, I, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    long long count = 0;
    a = b = c = d = e = f = g = h = I = j = k = l = m = n = o = p = q = r = s = t = u = v = w = x = y = z = 0;
    char S[500005];

    cin >> N >> L >> R >> S;
    for (int i = L; i <= R; ++i)
    {
        if (S[i] == 'a')
            a++;
        else if (S[i] == 'b')
            b++;
        else if (S[i] == 'c')
            c++;
        else if (S[i] == 'd')
            d++;
        else if (S[i] == 'e')
            e++;
        else if (S[i] == 'f')
            f++;
        else if (S[i] == 'g')
            g++;
        else if (S[i] == 'h')
            h++;
        else if (S[i] == 'i')
            I++;
        else if (S[i] == 'j')
            j++;
        else if (S[i] == 'k')
            k++;
        else if (S[i] == 'l')
            l++;
        else if (S[i] == 'm')
            m++;
        else if (S[i] == 'n')
            n++;
        else if (S[i] == 'o')
            o++;
        else if (S[i] == 'p')
            p++;
        else if (S[i] == 'q')
            q++;
        else if (S[i] == 'r')
            r++;
        else if (S[i] == 's')
            s++;
        else if (S[i] == 't')
            t++;
        else if (S[i] == 'u')
            u++;
        else if (S[i] == 'v')
            v++;
        else if (S[i] == 'w')
            w++;
        else if (S[i] == 'x')
            x++;
        else if (S[i] == 'y')
            y++;
        else if (S[i] == 'z')
            z++;
    }
    rep(i, N)
    {
        if (i >= 1 && i + R < N)
        {
            if (S[i + L - 1] == 'a')
                a--;
            else if (S[i + L - 1] == 'b')
                b--;
            else if (S[i + L - 1] == 'c')
                c--;
            else if (S[i + L - 1] == 'd')
                d--;
            else if (S[i + L - 1] == 'e')
                e--;
            else if (S[i + L - 1] == 'f')
                f--;
            else if (S[i + L - 1] == 'g')
                g--;
            else if (S[i + L - 1] == 'h')
                h--;
            else if (S[i + L - 1] == 'i')
                I--;
            else if (S[i + L - 1] == 'j')
                j--;
            else if (S[i + L - 1] == 'k')
                k--;
            else if (S[i + L - 1] == 'l')
                l--;
            else if (S[i + L - 1] == 'm')
                m--;
            else if (S[i + L - 1] == 'n')
                n--;
            else if (S[i + L - 1] == 'o')
                o--;
            else if (S[i + L - 1] == 'p')
                p--;
            else if (S[i + L - 1] == 'q')
                q--;
            else if (S[i + L - 1] == 'r')
                r--;
            else if (S[i + L - 1] == 's')
                s--;
            else if (S[i + L - 1] == 't')
                t--;
            else if (S[i + L - 1] == 'u')
                u--;
            else if (S[i + L - 1] == 'v')
                v--;
            else if (S[i + L - 1] == 'w')
                w--;
            else if (S[i + L - 1] == 'x')
                x--;
            else if (S[i + L - 1] == 'y')
                y--;
            else if (S[i + L - 1] == 'z')
                z--;
            if (S[i + R] == 'a')
                a++;
            else if (S[i + R] == 'b')
                b++;
            else if (S[i + R] == 'c')
                c++;
            else if (S[i + R] == 'd')
                d++;
            else if (S[i + R] == 'e')
                e++;
            else if (S[i + R] == 'f')
                f++;
            else if (S[i + R] == 'g')
                g++;
            else if (S[i + R] == 'h')
                h++;
            else if (S[i + R] == 'i')
                I++;
            else if (S[i + R] == 'j')
                j++;
            else if (S[i + R] == 'k')
                k++;
            else if (S[i + R] == 'l')
                l++;
            else if (S[i + R] == 'm')
                m++;
            else if (S[i + R] == 'n')
                n++;
            else if (S[i + R] == 'o')
                o++;
            else if (S[i + R] == 'p')
                p++;
            else if (S[i + R] == 'q')
                q++;
            else if (S[i + R] == 'r')
                r++;
            else if (S[i + R] == 's')
                s++;
            else if (S[i + R] == 't')
                t++;
            else if (S[i + R] == 'u')
                u++;
            else if (S[i + R] == 'v')
                v++;
            else if (S[i + R] == 'w')
                w++;
            else if (S[i + R] == 'x')
                x++;
            else if (S[i + R] == 'y')
                y++;
            else if (S[i + R] == 'z')
                z++;
        }
        else if (i >= 1 && i + L - 1 < N)
        {
            if (S[i + L - 1] == 'a')
                a--;
            else if (S[i + L - 1] == 'b')
                b--;
            else if (S[i + L - 1] == 'c')
                c--;
            else if (S[i + L - 1] == 'd')
                d--;
            else if (S[i + L - 1] == 'e')
                e--;
            else if (S[i + L - 1] == 'f')
                f--;
            else if (S[i + L - 1] == 'g')
                g--;
            else if (S[i + L - 1] == 'h')
                h--;
            else if (S[i + L - 1] == 'i')
                I--;
            else if (S[i + L - 1] == 'j')
                j--;
            else if (S[i + L - 1] == 'k')
                k--;
            else if (S[i + L - 1] == 'l')
                l--;
            else if (S[i + L - 1] == 'm')
                m--;
            else if (S[i + L - 1] == 'n')
                n--;
            else if (S[i + L - 1] == 'o')
                o--;
            else if (S[i + L - 1] == 'p')
                p--;
            else if (S[i + L - 1] == 'q')
                q--;
            else if (S[i + L - 1] == 'r')
                r--;
            else if (S[i + L - 1] == 's')
                s--;
            else if (S[i + L - 1] == 't')
                t--;
            else if (S[i + L - 1] == 'u')
                u--;
            else if (S[i + L - 1] == 'v')
                v--;
            else if (S[i + L - 1] == 'w')
                w--;
            else if (S[i + L - 1] == 'x')
                x--;
            else if (S[i + L - 1] == 'y')
                y--;
            else if (S[i + L - 1] == 'z')
                z--;
        }
        if (S[i] == 'a')
            count += a;
        else if (S[i] == 'b')
            count += b;
        else if (S[i] == 'c')
            count += c;
        else if (S[i] == 'd')
            count += d;
        else if (S[i] == 'e')
            count += e;
        else if (S[i] == 'f')
            count += f;
        else if (S[i] == 'g')
            count += g;
        else if (S[i] == 'h')
            count += h;
        else if (S[i] == 'i')
            count += I;
        else if (S[i] == 'j')
            count += j;
        else if (S[i] == 'k')
            count += k;
        else if (S[i] == 'l')
            count += l;
        else if (S[i] == 'm')
            count += m;
        else if (S[i] == 'n')
            count += n;
        else if (S[i] == 'o')
            count += o;
        else if (S[i] == 'p')
            count += p;
        else if (S[i] == 'q')
            count += q;
        else if (S[i] == 'r')
            count += r;
        else if (S[i] == 's')
            count += s;
        else if (S[i] == 't')
            count += t;
        else if (S[i] == 'u')
            count += u;
        else if (S[i] == 'v')
            count += v;
        else if (S[i] == 'w')
            count += w;
        else if (S[i] == 'x')
            count += x;
        else if (S[i] == 'y')
            count += y;
        else if (S[i] == 'z')
            count += z;
    }
    cout << count << endl;
    return (0);
}