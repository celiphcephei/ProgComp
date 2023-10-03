#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int a, b; scanf("%d %d", &a ,&b);
    ll res = 1;
    for (int i = 0; i < b; i++)
        res *= a;
    ll res2 = 1;
    for (int i = 0; i < a; i++) 
        res2 *= b;
    printf("%lld\n", res - res2);
    return 0;
}