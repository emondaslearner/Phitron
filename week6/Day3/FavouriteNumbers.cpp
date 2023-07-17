#include <bits/stdc++.h>

using namespace std;

string takeHome(int num) {
    if (num % 2 == 0 && num % 7 == 0) {
        return "Alice";
    } else if (num % 2 != 0 && num % 9 == 0) {
        return "Bob";
    } else {
        return "Charlie";
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int num;
        cin >> num;

        string winner = takeHome(num);
        cout << winner << endl;
    }

    return 0;
}

