#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> A(5);
    for(int i = 0; i < 5; i++){
        cin >> A[i];
    }
    int v;
    cin >> v;
    for(int i = 0; i < 5; i++){
        if(v == A[i]) cout << i + 1;
        if(i == 4 && A[i] != v) cout << 0;
    }
    return 0;
}