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

int main(){
  int n; scanf("%d", &n);
  int a{n / 2}, b;
  b = n - a;
  while(is_prime(a) || is_prime(b)){
    ++a;
    --b;
  }
  printf("%d %d\n", a, b);
  return 0;
}
