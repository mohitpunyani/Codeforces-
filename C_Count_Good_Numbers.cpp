#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define vec vector
#define pb push_back
#define INF INT_MAX
#define se second
#define fi first
#define pii pair<int, int>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pll pair<long long, long long>
#define str string

using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;

const int MOD = 1000000007;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

int countGood(int64_t X) {
    if (X <= 0) return 0;
    int primes[4] = {2, 3, 5, 7};
    int64_t res = X;
    for (int mask = 1; mask < (1 << 4); mask++) {
        int l = 1;
        int bits = __builtin_popcount(mask);
        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i)) {
                l *= primes[i];
            }
        }
        int64_t d = X / (int64_t)l;
        if (bits & 1) res -= d;
        else res += d;
    }
    return (int)res;
}

void solve() {
    int64_t l, r;
    cin >> l >> r;
    cout << countGood(r) - countGood(l - 1) << endl;
}

signed main() {
   
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
