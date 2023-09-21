#include <bits/stdc++.h>
using namespace std;
bool luckyNumber(string n){
    int count{0};
    for(const char& digit : n){
        if(digit == '7' || digit == '4') ++count;
    }
    if(count == 4 || count == 7) return true;
    else return false;
}
int main(){
    string n; cin >> n;
    (luckyNumber(n)) ? printf("YES\n") : printf("NO\n");
}