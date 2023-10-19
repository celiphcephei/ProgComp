// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ALL(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl;
int main(){
  int k,l,m,n,d; scanf("%d\n%d\n%d\n%d\n%d", &k, &l, &m, &n, &d);
  vector<int> nums;
  nums.pb(k); nums.pb(l), nums.pb(m), nums.pb(n);
  sort(ALL(nums));
  if(nums[0] == 1){
    printf("%d\n", d);
    exit(0);
  }
  int ans{0};
  for(int i{1}; i <= d; ++i){
    if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0) ++ans;
    //debug(i);
    //debug(ans);
  }
  printf("%d\n", d - ans);
  return 0;
}
