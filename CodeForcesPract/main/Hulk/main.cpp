// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    bool flag = true;
    while(n){
        if(flag) printf("I hate");
        else printf("I love");
        printf(" ");
        if(n == 1) printf("it");
        else printf("that");
        printf(" ");
        flag = !flag;
        --n;
    }
    printf("\n");
    return 0;
}