// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans{0}; scanf("%d", &n);
    vector<int> n1(n), n2(n);
    for(int i{0}; i < n; ++i) scanf("%d %d", &n1[i], &n2[i]);
    for(int i{0}; i < n; ++i){
        for(int j{0}; j < n; ++j)
            if(n1[i] == n2[j]) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}
