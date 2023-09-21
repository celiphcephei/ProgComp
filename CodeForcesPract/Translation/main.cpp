#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin >> s >> t;
    for(int i = 0; i < (int)s.length(); ++i){
        if(s[i] != t[(int)s.length() - 1 - i]){
            printf("NO\n");
            exit(0);
        };
    }
    printf("YES\n");
    // cout << s[0] << '\n';
    // cout << t[s.length() - 1] << '\n';
    return 0;
}