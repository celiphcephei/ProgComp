// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b; scanf("%d %d", &a, &b);
  if(a == b){
    printf("%d 0\n", a);
    exit(0);
  }
  int x{min(a,b)}, y{max(a,b)};
  int ans1{x % y}, ans2{(y - ans1) / 2};
  printf("%d %d\n", ans1, ans2);
  return 0;
}
