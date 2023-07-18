#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int aa = b + c + d;
        int bb = a + c + d;
        int cc = a + b + d;
        int dd = a + b + c;

        if (a > aa || b > bb || c > cc || d > dd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
