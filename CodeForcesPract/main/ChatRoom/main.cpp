#include <bits/stdc++.h>
using namespace std;
char ans[5]{'-', '-', '-', '-', '-'};
int main(){
    char c;
    int i = 0; // No tuve opcion.jpg
    while((c = getchar()) != '\n'){
        if(c == 'h' && i == 0){
            ans[i] = 'h'; ++i; continue;
        }
        if(c == 'e' && i == 1){
            ans[i] = 'e'; ++i; continue;
        }
        if(c == 'l' && i == 2){
            ans[i] = 'l'; ++i; continue;
        }
        if(c == 'l' && i == 3){
            ans[i] = 'l'; ++i; continue;
        }
        if(c == 'o' && i == 4){
            ans[i] = 'o'; ++i; continue;
        }
    }
    ans[4] == 'o' ? printf("YES\n") : printf("NO\n");
    return 0;
}