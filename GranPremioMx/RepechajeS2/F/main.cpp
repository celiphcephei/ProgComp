#include <bits/stdc++.h>
using namespace std;

// #define ALL(x) x.begin(), x.end()
// #define UNIQUE(c) (c).resize(unique(ALL(c)) - c.begin())

int main(){
    int D, C, R, ans, cans;
    scanf("%d %d %d", &D, &C, &R);
    ans = R;
    cans = C;
    int Rl, c = 0;
    vector<int> Cl(C);
    while(C--){
        cin >> Cl[c++];
    }
    c = 0;
    while(R--){
        scanf("%d",&Rl);
        D += Rl;
    }
    
    // sort(ALL(Cl)); UNIQUE(Cl);

    for(int i = 0; i < cans; ++i){
        D -= Cl[i];
        if(D >= 0) ++ans;
    }

    printf("%d\n", ans);

    return 0;
}