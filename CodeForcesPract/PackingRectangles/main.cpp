// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll w, h, n;
bool good(ll x){
    return n <= (x / w) * (x / h);
}
int main(){
    scanf("%lld %lld %lld", &w, &h, &n);
    ll l{0}, r{1};
    for(; !good(r); r *= 2);
    for(ll m{(l + r) / 2}; l + 1 < r; m /= 2){
        if(good(m)) r = m;
        else l = m;
        m = l + r;
    }
    printf("%lld\n", r);
    return 0;
}