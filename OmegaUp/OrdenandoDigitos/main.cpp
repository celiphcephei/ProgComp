#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, a;
    std::cin >> n;
    int A[n] = {0};
    for(int i = 0; i < n; i++){
        std::cin >> a;
        A[i] = a;
    }
    
    for(int j = 1; j < n; j++){
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
    for(int k = 0; k < 10; k++){
        std::cout << A[k] << " ";
    }
    return 0;
}