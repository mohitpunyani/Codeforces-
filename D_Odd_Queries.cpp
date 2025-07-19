#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long>v(n+1); // 1 based indexing
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        vector<long long>pf_sum(n+1); //1 based indexing
        for(int i=1;i<=n;i++){
            pf_sum[i]=pf_sum[i-1]+v[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum=pf_sum[l-1]+pf_sum[n]-pf_sum[r]+k*(r-l+1);
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}