#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int w = 0, b = 0, seg_len = 0;
        int ans = INT_MAX;

        for(int i = 0;i < n;i++)
        {
            seg_len++;
            if (s[i] == 'B')
                b++;
            if (s[i] == 'W')
                w++;

            if (seg_len >= k)
            {
                if (s[i - k] == 'B')
                    b--;
                if (s[i - k] == 'W')
                    w--;
                ans = min(ans, w);
                seg_len--;
            }
        }

        cout << ans << endl;
    }

    return 0;
}