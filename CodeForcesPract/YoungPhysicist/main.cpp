#include <bits/stdc++.h>

using namespace std;

int n, vi, A[3];

int main(){
    cin >> n;
    while(n--){
        for(int i = 0; i < 3; i++){
            cin >> vi;
            A[i] += vi;
        }
    }
    if(A[0] != 0 || A[1] != 0 || A[2] != 0) cout << "NO\n";
        else cout << "YES\n";
    return 0;
}