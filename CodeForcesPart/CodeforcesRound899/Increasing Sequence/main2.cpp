#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b = 1;
        while (true) {
            if (find(a.begin(), a.end(), b) == a.end()) {
                cout << b << endl;
                break;
            }
            b++;
        }
    }
    return 0;
}
