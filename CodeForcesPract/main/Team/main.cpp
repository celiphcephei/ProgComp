#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans{0}, sure; scanf("%d", &n);
    while(n--){
        int total{0};
        for(int i = 0; i < 3; ++i){
            scanf("%d", &sure);
            total += sure;
        }
        if(total > 1) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}