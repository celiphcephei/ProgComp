#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t; scanf("%d %d", &n, &t);
    char Q[60]; scanf("%s", &Q);
    while(t--){
        int i = 0;
        while(i < n){
            if(Q[i] == 'B'){
                if((i + 1) < n)
                    swap(Q[i], Q[i + 1]);
                if(Q[i + 1] == 'B' && Q[i] == 'B'){
                    ++i;
                    continue;
                }
                i += 2;
                continue;
            } else if(Q[i] == 'G'){
                ++i;
                continue;
            }
        }
    }
    printf("%s\n", Q);
    return 0;
}