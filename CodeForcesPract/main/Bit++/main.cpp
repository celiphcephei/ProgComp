#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans{0}; scanf("%d", &n);
    string op;
    for(int i = 0; i < n; ++i){
        cin >> op;
        if(op[1] == '+') ++ans;
        else --ans;
    }
    printf("%d\n", ans);
    return 0;
}