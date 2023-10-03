// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
// Como cuando te das cuenta O_O
int Total[110];
int main(){
    int n, num, size; scanf("%d", &n);
    scanf("%d", &size);
    for(int i{0}; i < size;++i){
        scanf("%d", &num);
        ++Total[num-1];
    }

    scanf("%d", &size);
    for(int i{0}; i < size;++i){
        scanf("%d", &num);
        ++Total[num-1];
    }
    int sum{0};
    for(int i{0}; i < n; ++i)
        if(Total[i] > 0) ++sum;
    sum == n ? printf("I become the guy.\n") : printf("Oh, my keyboard!\n");
    return 0;
}