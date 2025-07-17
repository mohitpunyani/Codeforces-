#include<bits/stdc++.h>
// #define long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        long long op=0;
        for(int i=1;i<=n;i++){
            if(v[i]>0 && v[i-1]==0)
            {
                op++;
            }
        }
        cout<<min(op,2ll)<<endl;
    }
    return 0;
}