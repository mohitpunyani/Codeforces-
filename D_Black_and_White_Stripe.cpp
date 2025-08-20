#include<bits/stdc++.h>
using namespace std;
// FIXED SIZE SLIDING WINDOW

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int j=0;
        int ans=n;
        int count_w=0;
        while(j<n)
        {
            if(s[j]=='W')
            {
                count_w++;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else{
                ans=min(ans,count_w);
                j++;
                if(s[i]=='W'){
                    count_w--;
                }
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}