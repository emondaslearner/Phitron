#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> second;
        vector<int> third;

        for(int i = 0;i < n;i++) {
            int num;
            cin >> num;
            second.push_back(num);
            third.push_back(num);
        }

        sort(second.begin(), second.end());
        sort(third.begin(), third.end());
        reverse(third.begin(), third.end());

        int sum = 0;

        for(int i = 0;i < n/2;i++) {
            sum += abs(third[i] - second[i]);
        }

        cout << sum << endl;
    }
    
    return 0;
}