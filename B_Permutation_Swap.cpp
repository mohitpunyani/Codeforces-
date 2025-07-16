#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(int i=1;i<=n;i++)
        {
            // i make 1 based indexing vector
            cin>>v[i];
            v[i]=abs(i-v[i]);
        }
        // for(int i=1;i<=n;i++)
        // {
        //     v[i]=i-v[i];
        // }
        unordered_map<long long ,long long>mp;
        // ans is most frequent
        for(int i=1;i<=n;i++){
            mp[v[i]]++;
        }
        long long ans=0;
        long long mx=0;
        for(auto &x: mp)
        {
            if(x.second>mx && x.first!=0){
                ans=x.first;
                mx=max(mx,x.second);
            }
            // ans=max(ans,x.second);
        }
        // if ans is zero then second most frequent is the ans

        cout<<ans<<endl;
    }
    return 0;
}