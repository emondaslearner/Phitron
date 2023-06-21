#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin >> n >> k;
       string arr[n];
       for(int i = 0;i < n;i++) {
        cin >> arr[i];
       }

        int ans = INT_MAX;
       for(int i = 0;i < n-1;i++) {
            for(int s = i+1;s < n;s++) {
                int count = 0;
                for(int j = 0;j < k;j++) {
                    count += abs(arr[i][j] - arr[s][j]);
                }
                ans = min(count, ans);
            }
       }

       cout << ans << endl;
    }
}