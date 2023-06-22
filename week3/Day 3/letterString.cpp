#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[n];

        map<char, long long> first;
        map<char, long long> second;
        map<string, long long> occ;

        for(int i = 0; i < n; i++) {
            string str;
            cin >> str;
            first[str[0]]++;
            second[str[1]]++;
            occ[str]++;
            arr[i] = str;
        }

        long long count = 0;
        for(int i = 0; i < n; i++) {
            long long x = max(0LL, first[arr[i][0]] - occ[arr[i]]);
            count += x;
            long long y = max(0LL, second[arr[i][1]] - occ[arr[i]]);
            count += y;
            if (first[arr[i][0]] > 0)
                first[arr[i][0]]--;
            if (second[arr[i][1]] > 0)
                second[arr[i][1]]--;
            if (occ[arr[i]] > 0)
                occ[arr[i]]--;
        }

        cout << count << endl;
    }

    return 0;
}