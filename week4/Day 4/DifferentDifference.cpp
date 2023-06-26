#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        int different = 1;
        vector<int> ans = {1};
        for (int i = 2; i <= k; i++)
        {
            int nxt = ans.back() + different;
            int rem = n - nxt;
            int remPlaces = k - i;
            if (rem >= remPlaces)
            {
                ans.push_back(nxt);
                different++;
            }
            else
                ans.push_back(ans.back() + 1);
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}