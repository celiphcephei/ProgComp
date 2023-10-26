// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define GC getchar()

void solve(){
  int a, b, c; scanf("%d %d %d", &a, &b, &c);
  if(a + b == c || a + c == b || b + c == a) printf("YES\n");
  else printf("NO\n");
}

int main(){
  int t; scanf("%d", &t);
  while(t--) solve(); 
  return 0;
}
