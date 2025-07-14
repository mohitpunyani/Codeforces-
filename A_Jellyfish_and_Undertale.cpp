#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long max_val_of_bmb_timer,initial_val_of_timer,n_tools;
        cin>>max_val_of_bmb_timer>>initial_val_of_timer>>n_tools;
        vector<long long>v;
        for(int i=0;i<n_tools;i++)
        {

            long long x;
            cin>>x;
            v.push_back(x);
        }
        long long ans=initial_val_of_timer;
        for(int i=0;i<n_tools;i++)
        {
            ans=ans+min(v[i],max_val_of_bmb_timer-1);
        }
        cout<<ans<<endl;

    }
}