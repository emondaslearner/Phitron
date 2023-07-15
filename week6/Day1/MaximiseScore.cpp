#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = abs(a[0] - a[1]);
        for (int i = 1; i < n - 1; i++) {
            int diff = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            ans = min(ans, diff);
        }
        ans = min(ans, abs(a[n - 1] - a[n - 2]));
        cout << ans << endl;
    }
    return 0;
}