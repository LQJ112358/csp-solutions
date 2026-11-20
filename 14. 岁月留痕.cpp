#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> common = {31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31};
    vector<int> leap   = {31, 29, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31};

   
    int leapPos[4] = {-1, 0, 1, 2};

    for (int k = 0; k < 4; ++k) {
        vector<int> seq;

       
        for (int year = 0; year < 3; ++year) {
            const vector<int> &months =
                (year == leapPos[k]) ? leap : common;
            seq.insert(seq.end(), months.begin(), months.end());
        }

       
        for (int start = 0; start + n <= 36; ++start) {
            bool match = true;

            for (int i = 0; i < n; ++i) {
                if (seq[start + i] != a[i]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}