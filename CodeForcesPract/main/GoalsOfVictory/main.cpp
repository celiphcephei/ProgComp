// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, ans{0}, num; scanf("%d", &n);
    for(int i{0}; i < n - 1; ++i){
        scanf("%d", &num);
        ans += num;
    }
        printf("%d\n", ans * -1);
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}