#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int arr[2] = {0};
        for(int i = 0;i < 3;i++) {
            int num;
            cin >> num;
            arr[num]++;
        }
        if(arr[0] > 1) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }
    return 0;
}