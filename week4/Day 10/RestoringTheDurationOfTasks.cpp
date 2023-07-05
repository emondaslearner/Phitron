#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arrOne[n];
        int arrSec[n];
        vector<int> finalArray;
        int prev = 0;
        
        for(int i = 0;i < n;i++) {
            cin >> arrOne[i];
        }
        for(int i = 0;i < n;i++) {
            cin >> arrSec[i];
        }

        for(int i = 0;i < n;i++) {
            if(i == 0) {
                finalArray.push_back(arrSec[i] - arrOne[i]);
            } else {
                if(arrOne[i] >= arrSec[i - 1]) {
                    finalArray.push_back(arrSec[i] - arrOne[i]);
                } else {
                    finalArray.push_back(arrSec[i] - arrSec[i-1]);
                }
            }
        }

        for(int i = 0;i < finalArray.size();i++) {
            cout << finalArray[i] << " ";
        }
        cout << endl;
    }

    return 0;
}