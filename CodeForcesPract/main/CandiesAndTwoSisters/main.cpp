// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans{0}; scanf("%d", &n);
    int x{n/2};
    while((x + ans) < n - 1) ++ans;
    printf("%d\n", ans);
}

int main(){
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}