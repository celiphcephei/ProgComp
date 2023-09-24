#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h, a, ans{0}; scanf("%d %d", &n, &h);
    char dummy;
    while(scanf("%d%c", &a, &dummy)){
        if(a <= h) ++ans;
        if(a > h) ans += 2;
        if(dummy == '\n') break;
    }
    printf("%d\n", ans);
    return 0;
}