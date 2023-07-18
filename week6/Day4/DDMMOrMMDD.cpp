#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string date;
        cin >> date;

        int length = date.size();

        int day = 10 * (date[0] - '0') + (date[1] - '0');
        int month = 10 * (date[3] - '0') + (date[4] - '0');

        if (day > 12)
            cout << "DD/MM/YYYY" << endl;
        else if (month > 12)
            cout << "MM/DD/YYYY" << endl;
        else
            cout << "Both" << endl;
    }

    return 0;
}
