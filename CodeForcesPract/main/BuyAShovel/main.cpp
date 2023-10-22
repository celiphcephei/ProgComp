// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl;
int main(){
  int k, r, i{1}; scanf("%d %d", &k, &r);
  while(1){
    int k2{k * i};
    string kS{to_string(k2)};
    if(kS[kS.size() - 1] == 48 || kS[kS.size() - 1] == r + 48) break;
    ++i;
  }
  printf("%d\n", i);
  return 0;
}
