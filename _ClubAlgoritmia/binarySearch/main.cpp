#include <iostream>
#include <vector>
#include <algorithm>

bool found(std::vector<int>& A, int n){
    int l{0}, r{(int) A.size() - 1};
    while(l <= r){
        int m = (l + r) / 2;
        if(A[m] == n) return true;
        else if(A[m] < n) l = m + 1;
        else r = m - 1;
    }
    return false;
}

int main(){
    std::vector<int> A{1,7,89,7,6,5,3,9,0,65,4,5,66,89};
    std::sort(A.begin(), A.end());
    for(auto& n : A) std::cout << n << ' ';
    std::cout << '\n';
    int n; std::cin >> n;
    found(A, n) ? std::cout << "SI\n" : std::cout << "NO\n";
    return 0;
}