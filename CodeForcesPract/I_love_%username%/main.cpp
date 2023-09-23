#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans{0}; scanf("%d", &n);
    
    int min = INT_MAX;
    int max = INT_MIN;
    int current;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &current);
        if (current > max)
            max = current;
        if (current < min)
            min = current;
        if(current > min || current < max) ++ans;
    }
    printf("%d\n", ans / 2);
    return 0;
}
// para sumar uno el valor actual debe ser mayor a todo lo anterior o menor a todo lo anterior