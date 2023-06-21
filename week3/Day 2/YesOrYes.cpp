#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        string str;
        cin >> str;

        int cnt = 0;

        if (str[0] == 'Y' || str[0] == 'y')
        {
            cnt++;
        }
        if (str[1] == 'E' ||  str[1] == 'e')
        {

            cnt++;
        }
        if (str[2] == 'S' || str[2] == 's')
        {
            cnt++;
        }
        if (cnt == 3)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}