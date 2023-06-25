#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        long long prev = a[0];
        long long count = 1;

        for(long long i = 1;i < n;i++) {
            if(prev >= a[i]) {
                prev = (prev^a[i]);
            } else {
                count++;
                prev = a[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}
