#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=INT_MAX;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        // k = > 2,3,4,5 // 4 solve differentyly
        int even_count=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0){
                even_count++;
            }
            if(v[i]%k==0)
            {
                ans=0;
            }
            long long rem=v[i]%k;
            ans=min(ans,k-rem);
        }
        if(k!=4)
        {
            cout<<ans<<endl;
        }
        else{
            if(even_count==0){
                cout<<min(ans,2ll)<<endl;
            }
            else if(even_count==1){
                cout<<min(ans,1ll)<<endl;
            }
            else{
                cout<<min(ans,0ll)<<endl;
            }
        }
    }
    return 0;
}