#include <bits/stdc++.h>
using namespace std;
int main(){
    char w1[110], w2[110]; scanf("%s\n%s", &w1, &w2);
    if(strcasecmp(w1, w2) == 0) printf("0\n");
    else if(strcasecmp(w1, w2) < 0) printf("-1\n");
    else if(strcasecmp(w1, w2) > 0)printf("1\n");
    return 0;
}