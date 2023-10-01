// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    double ans{0}, p;
    for(int i{0}; i < n; ++i){
        scanf("%lf", &p);
        ans += (p / 100);
    }
    printf("%.12lf\n", (ans / n) * 100);
    return 0;
}