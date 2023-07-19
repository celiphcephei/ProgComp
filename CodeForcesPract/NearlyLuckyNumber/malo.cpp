#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    scanf("%lld", &x);
    string toString = to_string(x);
    int prod = 1;
    for(char &singleChar : toString){
        int toInt = singleChar - 48;
        prod *= toInt;
    }
    (prod == 0 || prod % 28 != 0) ? printf("NO\n") : printf("YES\n");
    return 0;
}   