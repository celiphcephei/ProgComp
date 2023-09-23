#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, ans{0}; scanf("%d %d", &n, &k);
    vector<int> score(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &score[i]);
    --k;
    for(int i = 0; i < n; ++i)
        if((score[i] >= score[k]) && score[i] > 0) ++ans;
    printf("%d\n", ans);
    return 0;
}