// Author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
// C cosas
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, ans{1}; cin >> n;
    string current, prev{"--"};
    for(int i{0}; i < n; ++i){
        cin >> current;
        if(current[0] == prev[1]) ++ans;
        prev = current;
    }
    cout << ans << '\n';
    cout.flush();
    return 0;
}