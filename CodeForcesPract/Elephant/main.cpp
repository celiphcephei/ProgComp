#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans{0}, step{0}, x; scanf("%d", &x);
    while(x > step){
        step += 5;
        ++ans;
    }
    printf("%d\n", ans);
    return 0;
}