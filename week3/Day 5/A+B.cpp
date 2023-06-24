#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int first = str[0] - '0';
        int second = str[2]  - '0';

        cout << first + second << endl;
    }
    
    return 0;
}