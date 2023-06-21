#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, i, j, k;
        cin >> n >> m;
        long long a[n][m];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        long long ans = 0, sum, x, y;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                sum = a[i][j];
                x = j - 1;
                y = j + 1;
                for (k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }
                x = j - 1;
                y = j + 1;
                for (k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }

                if (sum > ans)
                    ans = sum;
            }
        }

        cout << ans;

        cout << endl;
    }
}