#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; scanf("%d", &n);
    vector<int> friends(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &friends[i]);
    
    vector<int> result(n);
    for (int i = 0; i < n; ++i)
        result[friends[i] - 1] = i + 1;

    for (int i = 0; i < n; ++i)
        printf("%d ", result[i]);

    return 0;
}