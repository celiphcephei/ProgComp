// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define GC getchar()

bool is_prime(int n){
  if(n <= 1) return false;
  for(int i{2}; i*i <= n; ++i)
    if(n % i == 0) return false;
  return true;
}

void solve(){
  int n; scanf("%d", &n);
  if(n != 5){
    string nothing;
    cin >> nothing;
    printf("NO\n");
    return;
  }
  string name{"Timur"};
  sort(ALL(name));

  string name2{"-----"};
  GC;
  for(int i{0}; i < n; ++i) scanf("%c", &name2[i]);

  sort(ALL(name2));
  if(name == name2) printf("YES\n");
  else printf("NO\n");
}

int main(){
  int t; scanf("%d", &t);
  while(t--) solve();
  return 0;
}
