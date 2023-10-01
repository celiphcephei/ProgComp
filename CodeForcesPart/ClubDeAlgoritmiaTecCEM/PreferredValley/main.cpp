#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end() 

int main() {
    int n;
    scanf("%d", &n);
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &nums[i]);

    int m = n / 2;

    nums[0] = 0;
    nums[n - 1] = 0;

    sort(ALL(nums));

    int l = -1, r = n;
    int x = nums[m];  // Cambiado a nums[m] para obtener el valor original del centro

    while (l + 1 < r) {
        int mid = (l + r) / 2;
        if (nums[mid] < x) // Buscamos el valor más alto que sea menor que el valor original del centro
            l = mid;
        else
            r = mid;
    }

    printf("%d\n", nums[l]);
    return 0;
}
