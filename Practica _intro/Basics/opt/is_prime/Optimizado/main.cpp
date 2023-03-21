#include <bits/stdc++.h>

using namespace std;


bool is_prime(int n);


int main(){
    int n;
    cin >> n;
    bool prime = is_prime(n);
    if(prime == true){
        cout << n << " es primo";
    } else {
        cout << n << " no es primo";
    }
    return 0;
}


bool is_prime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
        return true;
    }
}