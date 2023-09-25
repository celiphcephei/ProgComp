#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p, q, rooms{0}; scanf("%d", &n);
    while(n--){
        scanf("%d %d", &p, &q);
        if((q - p) >= 2) ++rooms;
    }
    printf("%d\n", rooms);
    return 0;
}