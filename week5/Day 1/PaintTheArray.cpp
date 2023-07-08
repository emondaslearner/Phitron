#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        ll gc1 = 0, gc2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                gc1 = gcd(gc1, ar[i]);
            } else {
                gc2 = gcd(gc2, ar[i]);
            }
        }

        int a = 0, b = 0;
        for (int i = 1; i < n; i += 2) {
            if (ar[i] % gc1 == 0) {
                a = 1;
                break;
            }
        }
        for (int i = 0; i < n; i += 2) {
            if (ar[i] % gc2 == 0) {
                b = 1;
                break;
            }
        }

        if (a == 1 && b == 1)
            cout << 0 << endl;
        else if (a == 0)
            cout << gc1 << endl;
        else
            cout << gc2 << endl;
    }

    return 0;
}