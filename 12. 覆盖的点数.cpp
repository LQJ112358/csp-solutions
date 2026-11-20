#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_COORD = 600000 + 5; 

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> diff(MAX_COORD, 0);
    int max_r = 0; 

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
        max_r = max(max_r, r);
    }

  
    vector<int> ans(n + 1, 0);
    int current_cover = 0;

 
    for (int i = 0; i <= max_r; ++i) {
        current_cover += diff[i];
       
        if (current_cover > 0) {
            ans[current_cover]++;
        }
    }

  
    for (int k = 1; k <= n; ++k) {
        cout << ans[k] << (k == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}