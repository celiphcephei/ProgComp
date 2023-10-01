#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, max{0}, current{0}; scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        current -= a;
        current += b;
        if(current > max) max = current;
    }
    printf("%d\n", max);
    return 0;
}