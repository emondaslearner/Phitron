#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(int a, int b, int c, int d) {
    if (a < b && c < d && b < d && a < c) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int flag = 0;

        if (isBeautiful(a, b, c, d)) {
            flag = 1;
        } else {
            int tmp = a;
            a = c;
            c = d;
            d = b;
            b = tmp;
            if (isBeautiful(a, b, c, d)) {
                flag = 1;
            } else {
                tmp = a;
                a = c;
                c = d;
                d = b;
                b = tmp;
                if (isBeautiful(a, b, c, d)) {
                    flag = 1;
                } else {
                    tmp = a;
                    a = c;
                    c = d;
                    d = b;
                    b = tmp;
                    if (isBeautiful(a, b, c, d)) {
                        flag = 1;
                    }
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}