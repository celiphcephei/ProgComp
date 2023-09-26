#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, ans{0}; scanf("%d", &n);
        vector<int> nums(n);
        vector<int> nums2(n);
        for(int i = 0; i < n; ++i){
            cin >> nums[i];
        }
        for(int i = 0; i < n; ++i){
            ans = i + 1;
            while(nums[i] == ans || nums2[i] <= nums2[i - 1]) ++ans;
        }
        cout << ans << '\n';
    }
    return 0;
}