#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> A(5); 
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        A[i] = n;
    }
    for(int j = 1; j < 5; j++){
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
    for(int i = 0; i < 5; i++){
        cout << A[i];
    }
    return 0;
}