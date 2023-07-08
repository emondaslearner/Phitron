#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        
        int num = str.back() - '0';
        if(num%2 == 0) {
            cout << 0 << endl;
            continue;
        }
        int secNum = str.front() - '0';
        if(secNum%2 == 0) {
            cout << 1 << endl;
            continue;
        }
        
        int checkEven = 0;
        for(int i = 0;i < str.size();i++) {
            int ls = str[i] - '0';
            if(ls%2 == 0){
                checkEven++;
                break;
            }
        }

        if(checkEven == 0) {
            cout << -1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    
    return 0;
}