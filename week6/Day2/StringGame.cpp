#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        string str;
        cin >> n >> str;  

        int z_count = 0;
        int o_count = 0;
        for(int i = 0;i < n;i++) {
            if(str[i] == '0') {
                z_count++;
            } else {
                o_count++;
            }
        }

        if(min(z_count, o_count) % 2 == 0) {
            cout << "Ramos" << endl;
        } else {
            cout << "Zlatan" << endl;
        }

    }

    return 0;
}