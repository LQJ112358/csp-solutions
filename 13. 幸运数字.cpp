#include <iostream>

using namespace std;

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
   
    if (cin >> n) {
        long long sum = 0; 
        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;
           
            if (x % 4 == 0 || x % 7 == 0) {
                sum += x; 
            }
        }
       
        cout << sum << "\n";
    }

    return 0;
}