#include <bits/stdc++.h>
using namespace std;
 
map<string, int> indx;
 
void pre_cal()
{
    int id = 0;
    string s(2, '.');
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (char cc = 'a'; cc <= 'z'; cc++)
        {
            if (c == cc)
                continue;
            s[0] = c;
            s[1] = cc;
            indx[s] = ++id;
        }
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        s[0] = c;
        s[1] = c;
        indx[s] = ++id;
    }
}
 
int main()
{
    pre_cal();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << indx[s] << endl;
    }
    return 0;
}
