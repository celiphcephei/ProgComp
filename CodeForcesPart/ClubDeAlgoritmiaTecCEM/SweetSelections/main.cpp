// Author: RenatoGM
#include <bits/stdc++.h>
int main(){
    int flavor{1}, drizzle{1}, topping{1};
    char dummy;
    char A[10];
    while(scanf("%s%c",&A,&dummy)){
        if(dummy == ' ') ++flavor;
        else break;
    }
    while(scanf("%s%c",&A,&dummy)){
        if(dummy == ' ') ++drizzle;
        else break;
    }
    while(scanf("%s%c",&A,&dummy)){
        if(dummy == ' ') ++topping;
        else break;
    }
    printf("%d\n", (flavor*(flavor + 1)/ 2) * drizzle * topping);
    return 0;
}