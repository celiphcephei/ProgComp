#include <bits/stdc++.h>
using namespace std;
bool foundNum(vector<int>& array, int x){
    int l{0}, r{(int) array.size() - 1};
    while(l <= r){
        int m = (l + r) / 2;
        if(array[m] == x) return true;
        else if(array[m] < x) l = m + 1;
        else r = m - 1;
    }
    return false;
}

int main(){
    int n, k, x; scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &nums[i]);
    for(int i = 0; i < k; ++i){
        scanf("%d", &x);
        foundNum(nums, x) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}