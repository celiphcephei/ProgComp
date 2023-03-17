#include <bits/stdc++.h>

using namespace std;

string inverso(string n){
    string copiaInversa = "";
    for(int i = n.size()-1; i >= 0; i--){
        copiaInversa += n[i];
    }
    return copiaInversa;
}

int strtoint(string S){
     int ans = 0;
     for(int i = 0; i < S.size(); i++){
        ans *= 10;
        ans += S[i] - '0';
     }
     return ans;
}

int main(){
    string n;
    cin >> n;
    string ninverso = inverso(n);
    cout << strtoint(n) + strtoint(ninverso);
    return 0;
}

/*
    Leer un numero N, definir N' como el número alreves e imprimir N + N'
*/
