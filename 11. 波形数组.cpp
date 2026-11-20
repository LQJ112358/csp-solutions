#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool is_wave = true;
   
    for (int i = 1; i < n - 1; ++i) {
        long long diff1 = a[i] - a[i - 1];
        long long diff2 = a[i + 1] - a[i];
        
      
        if (diff1 * diff2 >= 0) {
            is_wave = false;
            break;
        }
    }

    if (is_wave) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}