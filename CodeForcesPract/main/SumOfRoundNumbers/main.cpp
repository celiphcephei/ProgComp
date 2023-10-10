// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, count{0},j{0}; scanf("%d", &n);
    string nString = to_string(n);
    string cero{"0"};
    for(auto& c : nString)
        if(c != '0') ++count;
    printf("%d\n", count);
    for(int i{0}; i < nString.size(); ++i){
        if(nString[i] == '0') continue;
        printf("%c", nString[i]);
        for(int j{0}; j < nString.size() - i - 1; ++j)
            printf("0");
        printf(" ");
    }
    printf("\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
    return 0;
}