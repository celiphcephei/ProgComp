#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool flag = false;
    int count = 0;
    for(int i = 0; i < (int)s.length(); i++){
        if(s[i] < 97) count++;
    }

    if(count > ((int)s.length() / 2)) flag = true;

    for(int i = 0; i < (int)s.length(); i++){
        if(flag && s[i] >= 97) s[i] -= 32;
        else if(!flag && s[i] < 97) s[i] += 32;
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}