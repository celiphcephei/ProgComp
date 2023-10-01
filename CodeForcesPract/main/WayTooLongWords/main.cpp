#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    char b, f;
    for(int i = 0; i < n;++i){
        string word; cin >> word;
        if(word.size() <= 10) cout << word << '\n';
        else printf("%c%d%c\n", word[0], word.size() - 2, word[word.size() - 1]);
    }
    return 0;
}