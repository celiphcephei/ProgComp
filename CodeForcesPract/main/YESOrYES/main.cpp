// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
char A[3]{'Y', 'E', 'S'};
char B[3];
int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("%s", &B);
        strcasecmp(A, B) == 0 ? printf("YES\n") : printf("NO\n");
    }
}