#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if(n%2 == 0) {
            if(n >= 50) {
                if(n == 50) {
                    cout << "1" << endl;
                    continue;
                } else {
                    cout << n-50 << endl;
                }
            } else {
                int temp = 50 - n;
                cout << temp/2 << endl;
                continue;
            }
        } else {
            if(n>50) {
                cout << n-50 << endl;
                continue;
            } else {
                int temp = 50 - n;
                cout << temp/2+1 << endl;
                continue;
            }
        }
    }
    
    return 0;
}