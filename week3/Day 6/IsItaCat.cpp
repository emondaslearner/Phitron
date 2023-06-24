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
        string Test = "meow";


        for(int i=0;i<n;i++){
            if(str[i] <= 90)str[i]+=32;
        }

        string ans="";
 
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back() != str[i]){
                ans.push_back(str[i]);
            }
        }
 
        if(ans == Test){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}