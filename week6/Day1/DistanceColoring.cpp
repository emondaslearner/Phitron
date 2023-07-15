#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        if (N == 1) {
            cout << K << "\n";
            continue;
        }

        int MOD = 1e9 + 7;
        ll int result = 1;

        for (int i = 0, remaining = K; i < min(N, K); i++, remaining--)
            (result *= remaining) %= MOD;

        cout << result << "\n";
    }

    return 0;
}