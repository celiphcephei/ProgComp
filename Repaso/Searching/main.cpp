#include <bits/stdc++.h>

using namespace std;

int search(vector<int>, int n, int v);

int main(){
    int n, a, v;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> a;
        A[i] = a;
    }
    cin >> v;
    cout << search(A,n,v);
    return 0;
}

int search(vector<int> A, int tamaño, int valor){
    int ubicacion = 0;
    for(int i = 0; i < tamaño; i++){
        if (A[i] == valor) return (i + 1);
    }
    return -1;
}