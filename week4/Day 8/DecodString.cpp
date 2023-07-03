#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        string qs;
        cin >> qs;
 
        string str;
        for (int i = 0; i < n; i++)
        {
            int checkZero = i + 2;
            int checkThird = i + 3;
            if(checkZero < n && qs[checkZero] == '0' && qs[checkThird] != '0') {
                string concatenatedString = string(1, qs[i]) + string(1, qs[i+1]);
                int newInt = stoi(concatenatedString);
                str += 'a' + newInt-1;
                i = i+1;
            } else {
                if(qs[i] != '0') {     
                    int newInt = qs[i] - '0';
                    str += 'a' + newInt-1;
                }
            }
        }
 
        cout << str << endl;
    }
 
    return 0;
}