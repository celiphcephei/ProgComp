#include <bits/stdc++.h>
using namespace std;
int main(){
    int k; scanf("%d", &k);
    int f1{0}, f2{1}, next{1}, ans{0};
    for(int i{0}; i < k; ++i){
        ans += next;
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    printf("%d\n", ans);
    return 0;
}