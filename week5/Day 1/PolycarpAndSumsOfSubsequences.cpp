#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[8];
        for (int i = 0; i < 7; i++)
            cin >> ar[i];
        cout << ar[0] << " " << ar[1] << " ";
        if (ar[0] + ar[1] != ar[2])
            cout << ar[2] << endl;
        else
            cout << ar[3] << endl;
    }
    return 0;
}