// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b; cin >> a >> b;
    for(int i{0}; i < a.size(); ++i){
        if(a[i] == b[i]) printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}