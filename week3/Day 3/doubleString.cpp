#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        map<string, int> freq;
        string arr[n];
        for(int i = 0; i < n; i++) {
            string str;
            cin >> str;
            arr[i] = str;
            freq[str]++;
        }

        int ans[n] = {0};

        for(int i = 0; i < n; i++) {
            if(arr[i].size() == 1) continue;

            for(int j = 1; j < arr[i].size(); j++) {
                string left = arr[i].substr(0, j);
                string right = arr[i].substr(j);

                if(freq[left] > 0 && freq[right] > 0) {
                    ans[i] = 1;
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}