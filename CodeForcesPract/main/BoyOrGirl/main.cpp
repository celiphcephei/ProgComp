#include <bits/stdc++.h>
using namespace std;
// minus 97 - 122
// 26
int letters[26];
int main(){
    char c;
    int count{0};
    while((c = getchar()) != '\n'){
        int index = c - 122 + 25;
        ++letters[index];
    }
    for(int i = 0; i < 26; ++i){
        if(letters[i] >= 1)
            ++count;
    }
    (count % 2 == 0) ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");
    return 0;
}