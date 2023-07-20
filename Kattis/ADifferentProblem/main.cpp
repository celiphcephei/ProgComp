#include <bits/stdc++.h>
int main(){
    unsigned long long x, y;
    while(scanf("%llu %llu", &x, &y) != EOF)
        printf("%llu\n", (x > y) ? x - y : y - x);
    return 0;
}