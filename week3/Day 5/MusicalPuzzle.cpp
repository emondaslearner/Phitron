#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int i = 0;
        int j = 0;
        map<string, int> freq;
        while (j < n)
        {
            if(j < 1) {
                j++;
            } else {
                string concatenated = string(1, str[i]) + string(1, str[j]);
                freq[concatenated]++;
                i++;
                j++;
            }
        }
        
        int count = 0;
        for(auto sing : freq) {
            count++;
        }

        cout << count << endl;
    }
    
    return 0;
}