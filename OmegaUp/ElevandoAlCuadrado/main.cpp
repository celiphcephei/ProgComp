#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    int c = 0;
    std::cin >> n;
    while(n < 30000){
        n *= n;
        c++;
    }
    std::cout << n << ' ' << c;

    return 0;
}