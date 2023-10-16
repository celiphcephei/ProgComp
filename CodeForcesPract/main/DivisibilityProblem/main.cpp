// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int a, b, ans{0}; scanf("%d %d", &a, &b);
    if(a % b == 0) printf("0\n");
	else b > a ? printf("%d\n", b - a) : printf("%d\n", b - (a % b));
}
 
int main(){
	int t; scanf("%d", &t);
	while(t--) solve();
	return 0;
}