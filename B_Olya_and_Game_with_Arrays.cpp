#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long no_of_array;
        cin>>no_of_array;

        vector<long long>second_elements;
        long long lower_first_mn=INT_MAX;
        for(int i=0;i<no_of_array;i++)
        {

            long long n;
            cin>>n;
            vector<long long>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            second_elements.push_back(v[1]);
            lower_first_mn=min(lower_first_mn,v[0]);
 
        }
        sort(second_elements.begin(),second_elements.end());
        long long sum_of_elements=accumulate(second_elements.begin(),second_elements.end(),0ll);
        long long lower_second_mn=second_elements[0];
        long long ans=lower_first_mn+sum_of_elements-lower_second_mn;
        cout<<ans<<endl;

    }

}