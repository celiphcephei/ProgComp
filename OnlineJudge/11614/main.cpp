#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; scanf("%d",&x);
    long long n;
    while(x--){
        scanf("%ld", &n);
        printf("%d\n", (long long)(sqrt(1 + 8 * n) - 1) / 2);
    }
    return 0;
}