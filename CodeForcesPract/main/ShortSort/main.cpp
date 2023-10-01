#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; scanf("%d", &t);
    while(t--){
        char a, b, c;
        scanf("\n%c%c%c", &a, &b, &c);
        (a == 'a' || b == 'b' || c == 'c') ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}