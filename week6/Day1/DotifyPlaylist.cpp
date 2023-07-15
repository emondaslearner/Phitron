#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, k, L;
        cin>>n>>k>>L;
        
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int m, l;
            cin>>m>>l;
            
            if(l != L)      continue;
            
            v.push_back(m);
        }
        
        if(v.size() < k)
        {
            cout<<-1<<"\n";
            continue;
        }
        
        int ans = 0;
        sort(v.rbegin(), v.rend());
        
        for(int i=0; i<k; i++)
            ans += v[i];
            
        cout<<ans<<"\n";
    }
    
}