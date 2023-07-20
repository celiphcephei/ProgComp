#include <bits/stdc++.h>
int main(){
    int t, n, k, p, c = 1; scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &k, &p);
        printf("Case %d: %d\n", c++, (((k + p) % n) == 0) ? n : (k + p) % n );
    }
    return 0;
}