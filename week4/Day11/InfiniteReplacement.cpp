#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();

        if (t.size() == 1)
        {
            if (t[0] == 'a')
            {
                cout << "1\n";
            }
            else
            {
                long long int ans = (1LL << n);
                cout << ans << "\n";
            }
        }
        else
        {
            if (count(t.begin(), t.end(), 'a') > 0)
            {
                cout << "-1\n";
            }
            else
            {
                long long int ans = (1LL << n);
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
