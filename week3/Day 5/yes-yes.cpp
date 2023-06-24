#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string newString = "";
        for(int i = 0;i < 20;i++) {
            newString += "Yes";
        }

        bool check = false;
        for(int i = 0; i < newString.size();i++) {
            if(str[0] == newString[i] && i+str.size() < newString.size() && newString.substr(i, str.size()) == str) {
                check = true;
                break;
            }
        }

        if(check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}