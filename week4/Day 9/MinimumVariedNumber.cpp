#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n < 10) {
            cout << n << endl;
            continue;
        }
        int m = n;
        string ans;
 
        int dir = 9;
        while (m != 0)
        {
            if((m - dir) < 0) {
                string ls = to_string(m);
                ans += ls;
                break;
            }
            m = m - dir;
            string ch = to_string(dir);
            ans += ch;
            dir--;
        }
        reverse(ans.begin(), ans.end());
 
        cout << ans << endl;
        
    }
    
    return 0;
}