#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    int K;
    cin >> S;
    cin >> K;
    int movs = K - S.size();
    movs = abs(movs);
    for(int i = 0; i < movs; ++i){
        swap(S[i], S[i+K]);
    }
    cout << S;
    return 0;
}