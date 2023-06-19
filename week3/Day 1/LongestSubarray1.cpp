#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int i=0, j=0;
    long long sum = 0;
    int answer = 0;

    while(j<n)
    {
        sum+=a[j];
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
        }
        if(sum==k)
        {
            answer = max(answer,j-i+1);
        }
        j++;

    }
    return answer;
}

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr;
    for(int i = 0;i < n;i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << longestSubarrayWithSumK(arr,k) << endl;
}
