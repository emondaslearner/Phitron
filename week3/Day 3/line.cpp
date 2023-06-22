#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        string str;
        cin >> str;

        long long total = 0;
        int totalChanges = 0;
        vector<long long> arr;

        for(long long i = 0;i < n;i++) {
            long long l = i;
            long long r = n-i-1;

            if(str[i] == 'R') {
                if(l > r) {
                    totalChanges += 1;
                    total += l;
                    arr.push_back(l-r);
                } else {
                    total += r;
                }
            } else {
                if(l < r) {
                    totalChanges += 1;
                    total += r;
                    arr.push_back(r-l);
                } else {
                    total += l;
                }
            }
        }

        sort(arr.begin(),arr.end(),greater<long long>());

        vector<long long> ans(n+1);
        for(long long i = totalChanges;i <= n;i++) {
            ans[i] = total;
        }

        for(long long i = totalChanges-1;i > 0;i--) {
            total -= arr.back();
            arr.pop_back();
            ans[i] = total;
        }

        for(int i = 1;i <= n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}