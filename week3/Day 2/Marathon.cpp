#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >> n;
       map<int,int> freq;
 
       for(int i = 0;i < n;i++) {
            int num;
            cin >> num;
            freq[num]++;
       }
 
        int odd = 0;
        int even = 0;
       for(auto sing : freq) {
            if(sing.second%2 == 0) even++;
            else odd++;
       }
 
       cout << odd+(even/2)*2 << endl;
    }
}