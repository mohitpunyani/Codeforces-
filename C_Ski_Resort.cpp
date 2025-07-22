// /--------------------MY APPROACH---------------------/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int left=0;
        int right=0;

        long long cnt=0;
        long long ans=0;

        while(left<n)
        {
            if(v[left]>q)
            {
                left++;
            }
            right=left;
            while(right<n && v[right]<=q)
            {
               right++;
            }
            long long len=right-left;
            if(len>=k)
            {
                long long x=(len-k+1);
                long long cnt=x*(x+1)/2;
                ans=ans+cnt;
            }
            left=right; // move to the next segment
        }
        cout<<ans<<endl;
    }
    return 0;
}

