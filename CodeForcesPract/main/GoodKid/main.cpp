// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; scanf("%d", &n);
    vector<int> a(n);
    int ans{0}, prev;
    for(int i{0}; i < n; ++i) scanf("%d", &a[i]);
    for(int i{0}; i < n; ++i){
        ++a[i];
        prev = 1;
        for(int j{0}; j < n; ++j) prev *= a[j];
        if(ans < prev) ans = prev;
        --a[i];
    }
    printf("%d\n", ans);
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}