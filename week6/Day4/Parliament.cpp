#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int answer;

        if (n % 2 == 0)
            answer = n / 2;
        else
            answer = (n / 2) + 1;

        if (x >= answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
