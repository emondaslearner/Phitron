#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        map<int, char> freq;
        map<int, int> checkInt;
        bool check = true;
        
        for(int i = 0;i < n;i++) {
            if(checkInt[arr[i]] == 0) {
                freq[arr[i]] = str[i];
            } else if(freq[arr[i]] != str[i]) {
                check = false;
                break;
            }
            checkInt[arr[i]]++;
        }

        if(check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}