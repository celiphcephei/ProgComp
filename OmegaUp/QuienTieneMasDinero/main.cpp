#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int n;
    // 3
    int juan = 0;
    // 2
    int pedro = 0;
    for(int i = 0; i < 3; i++){
        std::cin >> n;
        juan += n;
    }
    for(int i = 0; i < 2; i++){
        std::cin >> n;
        pedro += n;
    }
    if(juan > pedro) std::cout << "Juan";
    else std::cout << "Pedro";
    return 0;
}