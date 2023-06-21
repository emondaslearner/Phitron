#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string arr[8];
        for(int i = 0;i < 8;i++) {
            cin >> arr[i];
        }

        int row = 0;
        int col = 0;

        int last = 0;

        for(int i = 0;i < 8;i++) {
            int howMany = 0;
            for(int j = 0;j < 8;j++) {
                if(arr[i][j]=='#' && arr[i+ 1][j-1]=='#' && arr[i+ 1][j+1]=='#') {
                    cout << i + 1 << " " << j + 1 << endl;
                    howMany = 1;
                    break;
                }
            }

            if(howMany == 1) {
                break;
            }

        }

    }
    
}