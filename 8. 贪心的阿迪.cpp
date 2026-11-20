#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

ll n, k, M, D;


ll check(ll x) {
    if (x <= 0 || x > M) return 0;
    
    ll T;
   
    if (D > n / k) {
        T = n / x;
    } else {
        T = min(n / x, D * k);
    }
    
  
    ll C = (T + k - 1) / k;
    return x * C;
}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> k >> M >> D)) return 0;

    vector<ll> candidates;
    
    candidates.push_back(M);

    candidates.push_back(n);
    

    if (D <= n / k) {
        candidates.push_back(n / (D * k));
    }


    ll max_C = min(D, 100000LL);
    for (ll C = 1; C <= max_C; ++C) {
        ll q = k * (C - 1) + 1;
        if (q > 0 && q <= n) {
            candidates.push_back(n / q);
            candidates.push_back(min(M, n / q));
        }
    }

    ll max_q = min(n / max(1LL, M), 100000LL);
    for (ll q = 1; q <= max_q; ++q) {
        candidates.push_back(n / q);
        candidates.push_back(min(M, n / q));
    }

    ll ans = 0;
    for (ll x : candidates) {
        ans = max(ans, check(x));
    }

    cout << ans << "\n";

    return 0;
}