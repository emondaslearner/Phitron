#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(long long i = 0;i < n;i++) {
            cin >> arr[i];
        }

        vector<long long> odd;
        for(long long i = 0;i < n;i++) {
            if(arr[i]%2 == 1) {
                odd.push_back(arr[i]);
            } 
        }

        sort(odd.begin(),odd.end());

        bool checkEven = true, checkOdd = true;

        for(int i = 0;i < n;i++) {
            if(arr[i]%2 == 0) {
                continue;
            }
            if(!odd.empty()) {
                checkEven = false;
                break;
            }
        }

        for(int i = 0;i < n;i++) {
            if(arr[i]%2 == 1) {
                continue;
            }
            if(odd.empty() || odd[0] >= arr[i]) {
                checkOdd = false;
                break;
            }
        }

        if(checkEven || checkOdd) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }
    return 0;
}