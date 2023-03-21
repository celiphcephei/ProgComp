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
    if(n % 2 == 0 and n > 2) return false;
    for(int i = 3; i <= n/2; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}