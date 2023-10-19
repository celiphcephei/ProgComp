// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << '\n';
int main(){
    int n, k; scanf("%d %d", &n, &k);
    int ans{0}, sum{0};
    for(int i{1}; i <= n; ++i){
        sum += 5 * i;
        //debug(i);
	//debug(sum);
	if(sum + k <= 240) ++ans;
	//debug(ans);
    }
    printf("%d\n", ans);
    return 0;
}
