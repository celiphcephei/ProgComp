#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, X; scanf("%d %d", &n, &X);
    vector<int> nums(n), ans;
    int sum;
    for(int i{0}; i < n; ++i) scanf("%d", &nums[i]);
    for(int i{0}; i < (1 << n); ++i){
        sum = 0;
        for(int j{0}; j < n; ++j){
            if(i & (1 << j)){
                sum += nums[j];
                ans.push_back(nums[j]);
            }
        }
        if(X == sum) break;
        else ans.clear();
    }
    for(auto& n : ans) printf("%d ", n);
    printf("\n");
    return 0;
}