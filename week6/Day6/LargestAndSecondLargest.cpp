#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i= 0;i < n;i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int firstIndex = 0;
        int secondIndex = 1;
        for(int i = 1;i < n;i++) {
            if(arr[firstIndex] != arr[i]) {
                secondIndex = i;
                break;
            }
        }

        int ans = arr[firstIndex] + arr[secondIndex];

        cout << ans << endl;
        
    }
    
    return 0;
}