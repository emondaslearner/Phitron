#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    map<string, int> freq;
    string ans;
    string arr[t];
    for(long long i = 0;i < t;i++){
        string str;
        cin >> str;
        arr[i] = str;
    }

    for(long long i = t-1;i >= 0;i--) {
        string str = arr[i];
        string con = string(1, str[str.size() - 2]) + string(1, str[str.size() - 1]);
        freq[str]++;
        if(freq[str] == 1) {
            ans+=con;
        }
    }

    cout << ans << endl;
    
    return 0;
}