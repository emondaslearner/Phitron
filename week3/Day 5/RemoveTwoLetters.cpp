#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;                 
    cin>>t;
    while(t--){
        long long n;              
        cin >> n;
        string str;           
        cin >> str;
 
        string newStr="";       
 
        for(long long i=2;i<n;i++){
            newStr.push_back(str[i]);
        }
 
        long long Fir=0,Sec=0;
        long long ans=1;
        while(Fir<n-2){
            if(str[Fir]!=newStr[Sec]){
                ans++;
            }
            Fir++;
            Sec++;
        }
        cout << ans << endl;
    }
    return 0;
}