#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    long long ans = n+m+(n*m);

    if(ans == 111) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
