#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& A, int n, int x){
    int l{-1}, r{n};
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(A[m] >= x) r = m;
        else l = m;
    }
    printf("%d\n", r + 1);
}

int main(){
    int n, k; scanf("%d %d", &n, &k);
    vector<int> A(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &A[i]);
    for(int i = 0; i < k; ++i){
        int x; scanf("%d", &x);
        solve(A, n, x);
    }
    return 0;
}