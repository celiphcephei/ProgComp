#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; scanf("%d", &x);
    int sum{0}, n{1};
    while(n > (sum - x)){
        ++n;
        sum += n; 
        cout << "sum = " << sum << '\n';
        cout << "n = " << n << '\n';
        cout << '\n';
    }
    printf("%d\n", n);
    return 0;
}