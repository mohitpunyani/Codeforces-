#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        vector<long long>prefix(n,0);
        vector<long long>suffix(n,0);
        long long ans=0;
        unordered_set<char>st; // used to store unique characters

        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            prefix[i]=st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suffix[i]=st.size();
        }
        for(int i=0;i<n-1;i++){
            long long temp=prefix[i]+suffix[i+1];
            ans=max(ans,temp);
        }
        cout<<ans<<endl;

    }
    return 0;
}