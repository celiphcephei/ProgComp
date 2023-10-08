// Author: RenatoGM
#include <bits/stdc++.h>
// Sale la poderosisima
using namespace std;
int main(){
    int t; scanf("%d", &t);
    for(int i{0}; i < t; ++i){
        int ans{0}, a, b;
        scanf("%d %d", &a, &b);
        while(a % b != 0){
            ++a;
            ++ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}