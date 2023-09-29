#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()

int aIndex(vector<int>& A, int b, int n){
    int l{-1}, r{n};
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(A[m] >= b) r = m;
        else l = m;
    }
    return r;
}

int bIndex(vector<int>& A, int a, int n){
    int l{-1}, r{n};
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(A[m] <= a) l = m;
        else r = m;
    }
    return l + 1;
}

int main(){
    int n; scanf("%d", &n);
    vector<int> A(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &A[i]);
    sort(ALL(A));
    int k; scanf("%d", &k);
    for(int i = 0; i < k ; ++i){
        int a, b; scanf("%d %d", &a, &b);
        int aI{aIndex(A, a, n)}, bI{bIndex(A, b, n)};
        int ans = bI - aI;
        cout << ans << ' ';
    }
    printf("\n");
    return 0;
}