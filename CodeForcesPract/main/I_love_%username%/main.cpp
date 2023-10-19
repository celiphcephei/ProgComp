// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans{0}, max, min, num; scanf("%d", &n);
    scanf("%d", &num);
    max = num; min = num;
    for(int i{1}; i < n; ++i){
        scanf("%d", &num);
	if(max > num){
            max = num;
	    ++ans;
	} else if(min < num){
            min = num;
	    ++ans;
	}
    }
    printf("%d\n", ans);
    return 0;
}
