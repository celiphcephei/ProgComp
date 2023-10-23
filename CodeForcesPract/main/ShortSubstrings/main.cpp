// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.being(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;

void solve(){
  char c;
  c = getchar();
  putchar(c);
  int i{2};
  while((c = getchar()) != '\n'){
    if(i % 2 == 0) putchar(c);
    ++i;
  }
  putchar('\n');
}

int main(){
  int t; scanf("%d", &t);
  getchar(); // Toma el char '\n' previo a scanf() de t;
  while(t--) solve();
  return 0;
}
