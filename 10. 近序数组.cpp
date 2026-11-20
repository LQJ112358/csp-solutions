#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b; // 存储去重后的数组
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        // 如果遇到不相等的数，加入新数组
        if(i == 0 || a[i] != a[i-1]) {
            b.push_back(a[i]);
        }
    }
    
    int m = b.size();
    // 去重后只有1个或2个元素，直接符合
    if(m <= 2) {
        cout << "Yes\n";
        return;
    }
    
    int num = 0;       // 极值点数量
    int last_pos = -100; // 记录上一个极值点的位置
    bool ok = true;    // 是否合法
    
    for(int i = 1; i < m - 1; i++) {
        // 判断严格极大值或严格极小值
        if((b[i] > b[i-1] && b[i] > b[i+1]) || (b[i] < b[i-1] && b[i] < b[i+1])) {
            num++;
            // 如果这是第2个极值点，它必须和上一个极值点相邻
            if(num == 2 && i - last_pos != 1) {
                ok = false;
            }
            // 如果极值点超过2个，绝对切不出来
            if(num > 2) {
                ok = false;
            }
            last_pos = i;
        }
    }
    
    if(ok) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}