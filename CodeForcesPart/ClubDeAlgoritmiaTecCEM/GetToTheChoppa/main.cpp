// author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    multiset<tuple<int, string>> flavors; 
    int n; scanf("%d", &n);
    for(int i{0}; i < n; ++i){
     	int minuto; cin >> minuto;
     	string name; cin >> name;
        cin.clear();
        flavors.emplace(minuto, name); 
    }
    for(auto &[mm, nam] : flavors) 
        cout << nam << ' ';
    printf("\n");
    return 0; 
}