#include<bits/stdc++.h>
using namespace std;
bool cust(pair<long long, long long >&a,pair<long long, long long>&b){
    if(a.first!=b.first)
    {
        // health values are different
        // return greater health value

        // return a.first>b.first

        if(a.first>b.first){
            return true; // do nothing  on true condition
        }
        else{
            return false; // do swap of pairs
        }

    }
    else{
        // return b.second>a.second
        if(a.second<b.second) return true;
        else return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n+1);
        for(long long int i=1;i<=n;i++){
            cin>>v[i];
        }
        // swap in decreasing order

        vector<pair<long long ,long long>>temp;

        // make vector of element and index
        for(long long int i=1;i<=n;i++)
        {
            long long a=v[i]%k;
            if(a==0)
            {

                temp.push_back({k,i});
               
            }
            else{
                temp.push_back({a,i});
            }
        }

        // use custom sort , because if we have same monsters then kill that which
        // have low index

        sort(temp.begin(),temp.end(),cust);

        for(int i=0;i<temp.size();i++){
            cout<<temp[i].second<<" ";
        }
        cout<<endl;

    }
    return 0;
}