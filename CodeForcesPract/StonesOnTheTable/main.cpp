#include <bits/stdc++.h>
using namespace std;
int main(){
    char color[60];
    int n, ans{0}; scanf("%d\n", &n);
    for(int i = 0; i < n; ++i){
        scanf("%c", &color[i]);
        if(color[i] == color[i-1]) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}