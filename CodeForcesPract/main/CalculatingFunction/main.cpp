#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; scanf("%lld", &n);
    ll ans = (ll)((double)(n / 2.0) + 0.5);
    (n % 2 == 0) ?  printf("%lld\n", ans) :  printf("-%lld\n", ans);
    return 0;
}