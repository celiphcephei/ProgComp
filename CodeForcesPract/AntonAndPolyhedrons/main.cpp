#include <bits/stdc++.h>
using namespace std;
// Tetrahedron  4
// Cube 6
// Octahedron 8
// Dodecahedron 12
// Icosahedron 20
int main(){
    int n, ans{0}; scanf("%d", &n);
    while(n--){
        string p;
        cin >> p;
        int pS = p.size();
        switch(pS){
        case 11:
            if(p[0] == 'T') ans += 4;
            else ans += 20;
            break;
        case 4:
            ans += 6;
            break;
        case 10:
            ans += 8;
            break;
        case 12:
            ans += 12;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}