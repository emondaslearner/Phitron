#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        long long n = str.size();
        vector<vector<long long>> freq(26);
        int willDo = 0;
        for (long long i = 0; i < n; i++)
        {
            int check = str[0];
            int end = str[n-1];
            int index = str[i];
            if(check < end) {
                if(index >= check && index <= end) {
                    freq[str[i] - 'a'].push_back(i + 1);
                }
            } else {
                willDo = 1;
                if(index >= end && index <= check) {
                    freq[str[i] - 'a'].push_back(i + 1);
                }
            }
        }
        
        if(willDo == 1) {
            reverse(freq.begin(), freq.end());
        }
        
        long long jump = 0;
        vector<long long> ans;
        for(int i = 0;i < freq.size();i++) {
            for(int j = 0;j < freq[i].size();j++) {
                jump += 1;
                ans.push_back(freq[i][j]);
            }
        }

        long long count = 0;
        int prev = 0;
        for(int i = 0;i < ans.size();i++) {
            if(prev == 0) {
                prev = str[ans[i] - 1];
            } else {
                int in = str[ans[i] - 1];
                count += abs(in - prev);
                prev = str[ans[i] - 1];
            }
        }

        cout << count << " " << jump << endl;
        for(int i = 0;i < ans.size();i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}