#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--)
    {
        long long n;
        cin >> n;
        
        vector<long long> arr(n);
        for(int i = 0;i < n;i++) cin >> arr[i];
 
        map<long long, int> freq;
        reverse(arr.begin(), arr.end());
 
        long long operations = 0;
        for(int i = 0;i < n;i++) {
            freq[arr[i]]++;
            if(freq[arr[i]] > 1) {
                operations = n-i;
                break;
            }
        }
 
        cout << operations << endl;
    }
    
    return 0;
}