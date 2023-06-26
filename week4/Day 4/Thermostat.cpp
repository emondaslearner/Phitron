#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) 
    {
        long long l, r, s;
        cin >> l >> r >> s;
        long long a, b;
        cin >> a >> b;
 
        if(a==b){
            cout<<0<<endl;
            continue;
        }
 
        if(abs(a - b) >= s) {
            cout << 1 << endl;
            continue;
        }
 
        if(b > a) {
            if(b+s <= r || a-s >= l) {
                cout << 2 << endl;
                continue;
            } else if(a+s <= r && b-l >= s) {
                cout << 3 << endl;
                continue;
            } else {
                cout << -1 << endl;
                continue;
            }
        } else {
            if(a+s <= r || b-s >= l) {
                cout << 2 << endl;
                continue;
            } else if(b+s <= r && a-l >= s) {
                cout << 3 << endl;
                continue;
            } else {
                cout << -1 << endl;
                continue;
            } 
        }
    }
    
    return 0;
}