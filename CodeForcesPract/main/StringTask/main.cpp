#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] < 97) s[i] += 32;
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                continue;
        }
        printf(".%c", s[i]);
    }
    printf("\n");
    return 0;
}