#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

unsigned long long FibList(int n){
    vector<unsigned long long> fibonacci(n+1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < n+1; ++i){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    return fibonacci[n];
}

int main(){
    int n;
    cin >> n;
    unsigned long long result = FibList(n);
    cout << result << '\n';
    return 0;
}