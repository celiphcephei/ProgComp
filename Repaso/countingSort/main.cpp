#include <bits/stdc++.h>

using namespace std;

int A[11], n, x, maxnum;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        A[x]++;
        maxnum = max(maxnum,x);
    }
    for(int i=0; i<=maxnum; i++){
        if(A[i] > 0){
            for(int j=0; j<A[i]; j++)
                cout << i << ' ';
        }
    }
    return 0;
}