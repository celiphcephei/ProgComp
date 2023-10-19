// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, K; scanf("%d %d", &N, &K);
    int map[N][N];
    for(int i{0}; i < N; ++i)
        for(int j{0}; j < N; ++j) scanf("%d", &map[i][j]);
    
    int ans{0};

    for(int i{0}; i <= N - K; ++i)
        for(int j{0}; j <= N - K; ++j){
            if(map[i][j] == map[i][j+K-1] && map[i][j] == map[i+K-1][j] && map[i][j] == map[i+K-1][j+K-1]) ++ans;
        }
    
    printf("%d\n", ans);

    return 0;
}