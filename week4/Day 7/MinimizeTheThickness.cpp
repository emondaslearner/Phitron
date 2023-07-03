#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = n;

        ll segSum = 0;

        for (int i = 0; i < n; i++)
        {
            segSum += a[i];
            ll sum = 0;
            int len = 0, mxLen = i + 1;
            bool possible = false;
            for (int j = i + 1; j < n; j++)
            {
                if (sum + a[j] > segSum)
                {
                    break;
                }
                if (j == n - 1 and sum + a[j] == segSum)
                {
                    mxLen = max(mxLen, len + 1);
                    possible = true;
                    break;
                }
                sum += a[j];
                len++;
                if (sum == segSum)
                {
                    mxLen = max(mxLen, len);
                    len = 0;
                    sum = 0;
                }
            }
            if (possible)
            {
                ans = min(ans, mxLen);
            }
        }

        cout << ans << endl;
    }
    return 0;
}