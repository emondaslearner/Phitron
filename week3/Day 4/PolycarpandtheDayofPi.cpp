#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        string pai = "314159265358979323846264338327";

        int count = 0;
        for(int i = 0;i < str.size();i++) {
            if(str[i] == pai[i]) {
                count++;
            } else {
                break;
            }
        }

        cout << count << endl;
    }
    
    return 0;
}