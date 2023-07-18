#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        float discount = 0.1;
        float discountedPrice = n - n * discount;

        if (discountedPrice < m)
            cout << "ONLINE" << endl;
        else if (discountedPrice > m)
            cout << "DINING" << endl;
        else
            cout << "EITHER" << endl;
    }

    return 0;
}
