#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        // wrong approach comes in mind
        string s;
        cin>>s;
        int n=s.size();
        int count_0=0;
        int count_1=0;
        // if(s.size()==1){
        //     cout<<0<<end;
        // }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        if(count_0==count_1){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0' && count_1>0)
                {
                    count_1--;
                }
                else if(s[i]=='1' && count_0>0){
                    count_0--;
                }
                else{
                    break;
                }
    
            }
            long long ans=count_0+count_1;
            cout<<ans<<endl;
        }


    }
    return 0;
}