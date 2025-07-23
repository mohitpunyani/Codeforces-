#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        vector<long long>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long i=0; // for v
        long long j=0; // for v1
        
        vector<long long>ans(2*n);
        long long k=0;
        while(i<n && j<n)
        {
            if(a[i]<b[j])
            {
                ans[k]=a[i];
                i++;
                k++;
            }
            else if(a[i]==b[j])
            {
                ans[k]=a[i];
                k++;
                ans[k]=a[j];
                k++;
                i++;
                j++;
            }
            else{
                // v[i]>v[j]
                ans[k]=b[j];
                j++;
                k++;
            }
        }
        while(i<n){
            ans[k]=a[i];
            i++;
            k++;
        }
        while(j<n){
           ans[k]=b[j];
           j++;
           k++;
        }
        int maxLen = 1, currentLen = 1;
        for (int k = 1; k < ans.size(); k++) {
            if (ans[k] == ans[k - 1]) {
                currentLen++;
                maxLen = max(maxLen, currentLen);
            } else {
                currentLen = 1;
            }
        }
        

        cout << maxLen << '\n';
    }
    return 0;
}