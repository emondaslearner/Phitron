#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        long long x = 1, ans = m - x;
        while (x <= m)
        {
            ans = min(ans, m - x);
            x *= 10;
        }
        cout << ans << endl;
    }
    return 0;
}