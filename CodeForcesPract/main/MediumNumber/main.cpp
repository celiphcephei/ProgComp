// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;

void solve(){
  vector<int> nums(3);
  for(int i{0}; i < 3; ++i) scanf("%d", &nums[i]);
  sort(ALL(nums));
  printf("%d\n", nums[1]);
}

int main(){
  int t; scanf("%d", &t);
  while(t--) solve();
  return 0;
}
