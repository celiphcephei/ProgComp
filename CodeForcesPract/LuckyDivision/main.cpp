#include <bits/stdc++.h>
using namespace std;

bool almostLucky(int n){
    bool ans = true;
    for(auto& num : to_string(n)){
        if(num != '4' && num != '7'){
            ans = false;
            break;
        }
    }

    if(ans) return true;
    
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0) return true;
    else return false;
}
int main(){
    int n; scanf("%d", &n);
    almostLucky(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}