#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int rem = n/10;
        int mod = n%10;

        int ans = 0;
        if(mod < 5) {
            int mi = rem*10;
            ans = 100 - mi;
        } else{
            int mi = (rem+1)*10;
            ans = 100 - mi;
        }

        cout << ans << endl;
    }
    

    return 0;
}