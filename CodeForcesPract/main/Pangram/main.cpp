// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int A[26];
int main(){
    int n; scanf("%d", &n); getchar();
    if(n < 26){
        printf("NO\n");
        exit(0);
    }
    int count{0};
    char c;
    while((c = getchar()) != '\n'){
        if(c < 97) c += 32;
        ++A[c % 97];
    }
    for(int i{0}; i < 26; ++i){
        if(A[i] > 0) ++count;
    }
    count == 26 ? printf("YES") : printf("NO\n");
    return 0;
}