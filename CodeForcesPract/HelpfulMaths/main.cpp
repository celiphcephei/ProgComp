#include <bits/stdc++.h>
using namespace std;
int lett[4];
int main(){
    int n;
    char dummy;
    vector<int> sum;
    while(scanf("%d%c",&n, &dummy)){
        ++lett[n-1];
        if(dummy == '\n') break;
    }
    for(int i = 0; i < 3; ++i){
        if(lett[i] > 0)
            for(int j = 0; j < lett[i]; ++j){
                sum.push_back(i + 1);
            }
    }
    // Un poquito de mas por no poder quitar el ultimo + d otra forma
    for(int i = 0; i < sum.size(); ++i){
        printf("%d", sum[i]);
        if(i < sum.size() - 1) printf("+");
    }
    printf("\n");
    return 0;
}