#include <iostream>

bool is_prime(int n);

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int n, a, b, r;
    std::cin >> n;
    while(n--){
        std::cin >> a >> b;
        r = 0;
        for(int i = a; i <= b; i++){
            if(is_prime(i)) r++;
        }
        std::cout << r << '\n'; 
    }
  return 0;
}

bool is_prime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}