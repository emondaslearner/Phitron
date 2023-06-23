#include <bits/stdc++.h>
using namespace std;

bool isAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;   
        map<long long, int> freq;
        vector<long long> ans;
        int arr[n-1];

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n-1;j++) {
                long long num;
                cin >> num;
                if(i == 0) {
                    arr[j] = num; 
                }
                freq[num]++;
                if(freq[num] < 2) {
                    ans.push_back(num);
                }
            }
        }
        bool check = isAscending(arr, n-1);

        if(check) {
            sort(ans.begin(), ans.end());
        }

        for(int i = 0;i < ans.size();i++) {
            cout << ans[i] << " "; 
        }
 
        cout << endl;
    }
    
    return 0;
}