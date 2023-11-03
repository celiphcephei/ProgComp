// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main(){
    int n; scanf("%d", &n);
    vector<int> v(n);
    for(int i{0}; i < n; ++i) scanf("%d", &v[i]);
    vector<int> v2 = v, mins, maxs;
    sort(ALL(v2));
    int min{v2[0]}, max{v2[n - 1]};
    if(min == max){
        printf("0\n");
        exit(0);
    }
    for(int i{0}; i < n; ++i){
        if(v[i] == min) mins.push_back(i);
        else if(v[i] == max) maxs.push_back(i);
    }
    int ans1{n - mins[mins.size() - 1]}, ans2{maxs[0]};
    mins[mins.size() - 1] < ans2 ? printf("%d\n", ans1 + ans2 - 2) : printf("%d\n", ans1 + ans2 - 1);
    return 0;
}
