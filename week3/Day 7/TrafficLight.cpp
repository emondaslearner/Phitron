#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        char ch;
        cin >> ch;
        string str;
        cin >> str;

        if(ch == 'g') {
            cout << 0 << endl;
            continue;
        }

        str += str;

        int count = 0;
        int prev = 0;
        bool fount = false;

        for(int i = 0;i < str.size();i++) {
            if(str[i] == 'g') {
                prev = max(prev, count);
                fount = false;
            } 
            if(str[i] == ch && fount == false) {    
                fount = true;
                count = 0;
            }

            if(fount) count++;
        }

        cout << prev << endl;
        
    }
    
    return 0;
}