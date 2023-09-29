#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A = {1,43,23,56,92,36,45,53,10,76};
    sort(A.begin(), A.end());
    int n{(int)A.size()};
    int l{-1}, r{n};
    int x; scanf("%d", &x);
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(A[m] >= x){
            r = m;
        } else {
            l = m;
        }
    }
    printf("%d\n", A[r]);
}