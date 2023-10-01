#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n; scanf("%d %d", &m, &n);
    if((m * n) % 2 == 0) printf("%d\n", m * n / 2);
    else printf("%d\n", ((m * n) - 1) / 2);
    return 0;
}