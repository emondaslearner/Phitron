#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            int x = v[i];
            while (x % 2 == 0)
            {
                x = x / 2;
                cnt++;
            }
        }

        if (cnt >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> res;
            for (int i = 1; i <= n; i++)
            {
                int res1 = 0;
                int x = i;
                while (x % 2 == 0)
                {
                    x = x / 2;
                    res1++;
                }

                if (res1 > 0)
                {
                    res.push_back(res1);
                }
            }

            sort(res.begin(), res.end());
            reverse(res.begin(), res.end());
            int ans = 0;
            int chek = 0;
            for (int i = 0; i < res.size(); i++)
            {
                cnt += res[i];
                ans++;
                if (cnt >= n)
                {
                    chek = 1;
                    break;
                }
            }

            if (chek == 1)
            {
                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}