#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h, a, c = 0;
    scanf("%d %dh", &n, &h);
    while(n--){
        scanf("%d", &a);
        if(h >= a) ++c;
    }
    printf("%d\n", c);
    return 0;
}