#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        long long ans=v[n]-v[1];

        // lock a1
        for(int i=2;i<=n;i++){
            ans=max(ans,v[i]-v[1]);
        }
        // lock a5
        for(int i=n-1;i>=1;i--)
        {
            ans=max(ans,v[n]-v[i]);
        }
// pick every two consecutive elements, we are here every element can be the a1 and a5 on the basis of k
    
        for(int i=1;i<n;i++)
        {
            ans=max(ans,v[i]-v[i+1]);
        }
        cout<<ans<<endl;
    }
}