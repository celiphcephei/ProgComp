// @author: RenatoGM
// Los papus y yo cuando O(N!)
// como cuando te das cuenta
// XDDDDDDDDDDD CONFIO
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << '\n'
#define ALL(x) x.begin(), x.end()

void solve(){
    int n, x; scanf("%d %d", &n, &x);
    vector<int> s(n);
    for(int i{0}; i < s.size(); ++i) scanf("%d", &s[i]);
    int ans;
    bool flag{true};

    do{
        ans = 0;
        for(int i = s.size() - 1; i >= 0; --i){
            ans += s[i];
            if(ans > x) break;
            if(ans == x){
                flag = false;
                break;
            }
        }
        if(flag){
            printf("YES\n");
            for(int i = s.size() - 1; i >= 0; --i) printf("%d ", s[i]);
            printf("\n");
            return;
        }
        flag = true;
    } while(next_permutation(ALL(s)));
    printf("NO\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}