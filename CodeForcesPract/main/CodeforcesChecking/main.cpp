// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
const char* a{"codefrs"};

void solve(){
    char b; scanf("\n%c", &b);
    strchr(a, b) ? printf("YES\n") : printf("NO\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}