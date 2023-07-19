#include <bits/stdc++.h>
using namespace std;
// Pendiente a corregir, al convertir a string numeros como 04 07 elimina el 0
bool luckyNumber(long long n){
    string numberString = to_string(n);
    for(char &digit : numberString){
        if(digit != '7' && digit != '4') return false;
    }
    return true;
}
int main(){
    long long n;
    cin >> n;
    (luckyNumber(n)) ? printf("YES\n") : printf("NO\n");
}