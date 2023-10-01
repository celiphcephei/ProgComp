// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main(){
    vector<int> shoes(4);
    int ans{0};
    for(int i{0}; i < 4; ++i)
        scanf("%d", &shoes[i]);
    sort(ALL(shoes));
    for(auto it = unique(ALL(shoes)); it != shoes.end(); ++it)
        ++ans;
    printf("%d\n", ans);
    return 0;
}