// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main(){
    string f, s, t, sum;
    cin >> f >> s >> t;
    sum = f + s;
    sort(ALL(sum)); sort(ALL(t));
    (sum == t) ? printf("YES\n") : printf("NO\n");
    return 0;
}