#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h, m, ans{0}; scanf("%d %d", &h, &m);
    while(h < 23){
        ++h;
	ans += 60;
    }
    ans += (60 - m);
    printf("%d\n", ans);
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}
