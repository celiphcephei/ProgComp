#include <bits/stdc++.h>
using namespace std;
char w[1100];
int main(){
    scanf("%s", &w);
    if(w[0] > 96) w[0] -= 32;
    printf("%s\n", w);
    return 0;
}