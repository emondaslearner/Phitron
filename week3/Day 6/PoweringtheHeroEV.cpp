#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;                  
    cin >> t;
    while(t--){
        int n;            
        cin >> n;
        long long ans = 0;
        priority_queue<long long> st;
    
        for(int i = 0;i < n;i++) {
            long long num;
            cin >> num;
            
            if(num != 0) {
                st.push(num);
            } else {
                if(!st.empty()) {
                    ans += st.top();
                    st.pop();
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}