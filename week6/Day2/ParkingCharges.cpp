#include<bits/stdc++.h>
using namespace std;

int calculateParkingCharges(int X, int Y, int H) {
    int totalCharges = X; 

    if (H > 1) {
        totalCharges += (H - 1) * Y; 
    }

    return totalCharges;
}

int main() {
    int X, Y, H;
    cin >> X >> Y >> H;

    int totalCharges = calculateParkingCharges(X, Y, H);
    cout << totalCharges << endl;

    return 0;
}