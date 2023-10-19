// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int A[26];
int main(){
    char c;
    int ans{0};
    getchar();
    while((c = getchar()) != '}'){
        if(c != ' ' && c != ',') ++A[c % 97];
    }
    for(int i{0}; i < 26; ++i) if(A[i] > 0) ++ans;
    printf("%d\n", ans);
    return 0;
}
