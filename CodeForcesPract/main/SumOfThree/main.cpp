#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y{3}, z{1}; scanf("%d", &n);
    if((n / 2) % 3 == 0) n = (int)((double) n / 2 + 0.5);
    else x = n / 2;
    if((x / 2) % 3 == 0) y = (int)((double) n / 2 + 0.5);
    else y = x / 2;
    while(1){
        if(x == y){
            --y;
            ++z;
            continue;
        }
        if(((x + y + z) == n) && x % 3 != 0 && y % 3 != 0 && z % 3 != 0) break;
        if((x + y + z) < n){
            ++z;
            if(z % 3 == 0) ++z;
            continue;
        }
        else if((x + y + z) > n){
            --y;
            if(y % 3 == 0) --y;
            continue;
        }
    }
    printf("%d %d %d", x, y, z);
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}