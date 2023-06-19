#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int i = 0, j = 0;
        int n = s.size(), ans = -1, uniq = 0;

        int freq[26] = {0};

        while (j < n)
        {
            char ch = s[j];
            if (freq[ch - 'a'] == 0)
                uniq++;
            freq[ch - 'a']++;

            if (uniq > k)
            {
                while (uniq > k)
                {
                    char left = s[i];
                    freq[left - 'a']--;

                    if (freq[left - 'a'] == 0)
                        uniq--;
                    i++;
                }
            }

            if (uniq == k)
            {
                ans = max(ans, j - i + 1);
            }
            j++;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}