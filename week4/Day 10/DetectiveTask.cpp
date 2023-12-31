#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        
        if (count(all(s), '?') == n) {
            cout << n << endl;
            continue;
        }
        if (count(all(s), '1') == 0) {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                ans++;
                if (s[i] == '0')
                    break;
            }
            cout << ans << endl;
            continue;
        }
        int last_zero = -1;
        int ans;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0')
                last_zero = i;
            else {
                if (s[i] == '1') {
                    if (last_zero == -1) {
                        ans = n - i;
                        break;
                    } else {
                        ans = last_zero - i + 1;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}