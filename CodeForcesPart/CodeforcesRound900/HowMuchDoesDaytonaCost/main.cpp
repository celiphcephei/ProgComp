#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n{0}, k{0}, num{0}, flag{false}; scanf("%d %d", &n, &k);
        vector<int> nums(n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &num);
            if(num == k) flag = true;
        }
        flag ? printf("YES\n") : printf("NO\n");
        nums.clear();
    }
    return 0;
}