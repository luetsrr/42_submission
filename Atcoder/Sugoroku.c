#include <stdio.h>
#include <stdlib.h>

int b[500000];
int c[500000];

int mod(int k, int l)
{
    char s[] = "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    long long m = 0;

    for (int i = 0; s[i] != '\0'; i++)
        m = (m * 10 + (s[i] - '0')) % (k - l);
    return ((m - l % (k - l) + k - l) % (k - l));
}

int main()
{
    int n;
    if(scanf("%d", &n) != 1)
        return (1);
    int *a;
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        if(scanf("%d", &a[i]) != 1)
            return (1);
    }
    for (int i = 0; i <= n; i++)
        b[i] = -1;
    int j = 0;
    int k;
    int m;
    while (j < n)
    {
        k = 0;
        m = a[j];
        b[j] = k;
        c[k] = m;
        while (k < 500000)
        {
            k++;
            if (b[m - 1] != -1)
            {
                printf("%d", c[mod(k, b[m - 1]) + b[m - 1]]);
                for (int i = 0; i < k; i++)
                    b[c[i] - 1] = -1;
                break;
            }
            b[m - 1] = k;
            m = a[m - 1];
            c[k] = m;
        }
        if (j < n - 1)
            printf("%s", " ");
        j++;
    }
    return (0);
}