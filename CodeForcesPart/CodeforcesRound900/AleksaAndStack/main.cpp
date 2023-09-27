#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n, 0);

        for (int i = 1; i < n - 1; ++i) {
            a[i] = a[i - 1] + 1;
        }

        a[n - 1] = 3 * a[n - 3] + 2;

        for (int i = 0; i < n; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
