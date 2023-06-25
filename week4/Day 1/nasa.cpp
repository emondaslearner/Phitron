#include <bits/stdc++.h>
using namespace std;
long long cs=1;
vector<long long>store;
void nasa()
{
    long long n; 
    cin>>n;
    long long a[n];
    long long frequancyArr[35000]={0};
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        frequancyArr[a[i]]++;
    }
    long long ans=0;
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<store.size();j++)
        {
            long long k=a[i] ^ store[j];
            if(k > (1<<15))
            {
                continue;
            }
            long long x=frequancyArr[k];
            ans+=frequancyArr[k];
        }
    }
    cout<<(ans+n)/2<<endl;
}
bool palindrome(long long val)
{
    string ans=to_string(val);
    string ans2=ans;
    reverse(ans2.begin(),ans2.end());
    return ans==ans2;
}


int main()
{

    for(long long i=0;i<(1<<15);i++)
    {
        if(palindrome(i))
        {
            store.push_back(i);
        }
    }

    long long ls;
    cin>>ls;
    while(ls--)
        nasa();
    return 0;
}