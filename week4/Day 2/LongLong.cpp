#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];

        for(long long i = 0;i < n;i++) cin >> arr[i];

        long long sum = 0;
        long long operations = 0;
        bool check = false;

        for(long long i = 0;i < n;i++) {
            if(arr[i] < 0 && check == false) {
                check = true;
                operations += 1;
            }

            if(arr[i] > 0 && check) {
                check = false;
            }
            
            sum += abs(arr[i]);
        }
        cout << sum << " " << operations << endl;
    }
    
    return 0;
}