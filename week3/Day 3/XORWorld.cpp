#include <iostream>
using namespace std;

long long XORFromZero(long long n) {
    long long mod = n % 8;
    if (mod == 0 || mod == 1)
        return n;
    else if (mod == 2 || mod == 3)
        return 2;
    else if (mod == 4 || mod == 5)
        return n + 2;
    else if (mod == 6 || mod == 7)
        return 0;
    else
        return 0;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long result;
    if ((B - A + 1) % 2 == 0)
        result = (B - A + 1) % 4 == 0 ? 0 : 1;
    else
        result = XORFromZero(B) ^ XORFromZero(A - 1);

    cout << result << endl;

    return 0;
}