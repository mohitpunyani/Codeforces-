#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> ans(n);
        bool all_same = true;
        for (int i = 1; i < n; i++)
            if (v[i] != v[0]) all_same = false;
        if (all_same)
         {
        
            for (int i = 0; i < n; i++)
            {
                ans[i+1] = (i + 1) % n;
                if(i==n)
                {
                    break;
                }
            }
            ans[0]=n;
        }
         else {
            bool impossible = false;
            for (int i = 0; i < n;) {
                int j = i;
                while (j < n && v[j] == v[i]) j++;
                if (j - i == 1) {
                    impossible = true;
                    break;
                }
                for (int k = i; k < j; k++)
                    ans[k] = (k == j - 1 ? i : k + 1) + 1;
                i = j;
            }
            if (impossible) {
                cout << -1 <<endl;
                continue;
            }
        }
        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout <<endl;

    }
    return 0;
}