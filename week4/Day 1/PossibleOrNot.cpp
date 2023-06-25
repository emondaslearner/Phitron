#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        
        for(long long i = 0;i < n;i++) cin >> arr[i];

        long long ans = -1;

        for(long long i = 0;i < n;i++) {
            if((arr[i] & m) == m) {
                ans &= arr[i];
            }
        }

        if(ans == m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}