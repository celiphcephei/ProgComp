#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& A, int n, int x){
    int l{-1}, r{n};
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(A[m] <= x) l = m;
        else r = m;
    }
    printf("%d\n", l + 1);
}

int main(){
    int n, k; scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &nums[i]);
    for(int i = 0; i < k; ++i){
        int x; scanf("%d", &x);
        solve(nums, n, x);
    }
    return 0;
}