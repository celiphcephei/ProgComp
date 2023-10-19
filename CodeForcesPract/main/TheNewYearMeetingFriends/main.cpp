#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main(){
	vector<int> nums(3);
	int x, y, z, ans{0}; scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
        sort(ALL(nums));
        ans += (nums[2] - nums[1]);
	ans += (nums[1] - nums[0]);
	printf("%d\n", ans);
	return 0;
}
