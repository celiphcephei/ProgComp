// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main(){
  vector<int> x(4);
  for(int i{0}; i < 4; ++i) scanf("%d", &x[i]);
  sort(ALL(x));
  for(int i{0}; i < 3; ++i){
    int n{x[3] - x[i]};
    printf("%d ", n);
  }
  printf("\n");
  return 0;
}
