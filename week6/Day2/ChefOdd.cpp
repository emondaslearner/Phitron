#include <bits/stdc++.h>
using namespace std;

string canPartition(int N, int K) {
    int xtr = (N / 2) + (N % 2);
    int an = xtr - K;
    if (N < 2 * K) {
        return "NO";
    } else if (N == 2 * K) {
        return "YES";
    } else {
        if (an % 2 == 0) {
            return "YES";
        } else {
            return "NO";
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string result = canPartition(N, K);
        cout << result << endl;
    }

    return 0;
}