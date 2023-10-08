// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= m; ++j){
            if(i % 2 != 0){
                printf("#");
                continue;
            } else {
                if((j == 1 && i % 2 == 0) && (i % 4 == 0)){
                    printf("#");
                    continue;
                } else if((j == m && i % 2 == 0) && (i % 4 != 0)){
                    printf("#");
                    continue;
                } else {
                    printf(".");
                    continue;
                }
            }
        }
        printf("\n");
    }
    return 0;
}