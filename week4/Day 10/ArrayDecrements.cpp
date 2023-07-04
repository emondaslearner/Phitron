#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int arrSecond[n];
        for(int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        for(int i = 0;i < n;i++) {
            cin >> arrSecond[i];
        }
        
        int diff = -1,zero_diff=-1;
        bool imp = false;
        for(int i = 0;i < n;i++) {
            if(arr[i]<arrSecond[i]){
                imp = true;
                break;
            }
            if(arrSecond[i]!=0){
                if(diff==-1){
                    diff=arr[i]-arrSecond[i];
                }
                else{
                    if(arr[i]-arrSecond[i]!=diff){
                        imp=true;
                        break;
                    }
                }
            }
            else{
                zero_diff = max(zero_diff,arr[i]-arrSecond[i]);
            }
        }

        if(imp){
            cout << "NO" << endl;
            continue;
        }

        if(diff==-1 || zero_diff<=diff) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}

