// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << '\n';
int main(){
    int n, ans{0}; scanf("%d", &n);
    vector<map<int, int>> team, team2;
    for(int i{0}; i < n; ++i){
        map<int, int> pair;
        int x, y; scanf("%d %d", &x, &y);
        pair.emplace(x, y);
        team.push_back(pair);
    }

    for(int i{3}; i < (1 << n); ++i){
        for(int j{0}; j < n; ++j){
            if(i & (1 << j)){
                map<int, int> pair;
                pair.emplace(team[j].begin()->first, team[j].begin()->second);
                team2.push_back(pair);
            }
        }
 
        if(team2.size() == 2){
                for(int i{0}; i < 1 ; ++i){
                    if(team2[i].begin()->first == team2[i + 1].begin()->second) ++ans;
                    if(team2[i].begin()->second == team2[i + 1].begin()->first) ++ ans;
                }
            }
        team2.clear();
    }
 
    printf("%d\n", ans);
    return 0;
}