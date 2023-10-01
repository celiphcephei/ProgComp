#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans{0}, diff; scanf("%d", &n);
    while(n--){
        scanf("%d", &diff);
        if(diff == 1) {
            printf("HARD\n");
            exit(0);
        }
    }
    printf("EASY");
    return 0;
}