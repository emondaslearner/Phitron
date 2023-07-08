#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> freq;
        int arr[n];
        for(int i = 0;i < n;i++) {
            int num;
            cin >> num;
            freq[num]++;
            arr[i] = num;
        }

        int num = 0;
        for(auto sing : freq) {
            if(sing.second <= 1) {
                num = sing.first;
                break;
            }
        }

        for(int i = 0;i < n;i++) {
            if(arr[i] == num) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}