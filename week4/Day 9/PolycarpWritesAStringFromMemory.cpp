#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
 
        int ans = 1;
 
        set<char> check;
 
        for(int i = 0;i < n;i++)
        {
            check.insert(s[i]);
            if (check.size() > 3)
            {
                ans++;
                check.clear();
                check.insert(s[i]);
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}