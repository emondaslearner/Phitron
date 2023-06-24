#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<pair<long long, long long>> a;
        vector<long long> arr;
        for(int i = 0;i < n;i++) {
            long long num;
            cin >> num;
            a.push_back({num, i});
        }
        for(int i = 0;i < n;i++) {
            long long num;
            cin >> num;
            arr.push_back(num);
        }

        sort(a.begin(), a.end());

        sort(arr.begin(), arr.end());

        vector<long long> ans(n);
        for(int i = 0;i < n;i++) {
            ans[a[i].second] = arr[i];
        }

        for(int i = 0;i < n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}