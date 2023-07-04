#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }

        for(int i=n-2;i>=0;i--) {
            while(a[i]!=0 and a[i]>=a[i+1]){
                a[i]/=2;
                ans++;
            }
            if(a[i]>=a[i+1] or a[i]==0 and i>0){
                ans=-1;
                break;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}