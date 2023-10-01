#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t; scanf("%d %d", &n, &t);
    char Q[60]; scanf("%s", &Q);
    while(t--){
        for(int i = 0; i < n; ++i){
            if(Q[i] == 'B' && Q[i + 1] == 'G'){
                swap(Q[i], Q[i + 1]);
                ++i;
            }
        }
    }
    printf("%s\n", Q);
    return 0;
}