#include <iostream>
#define ll long long

using std::cout;
using std::cin;

unsigned ll euclid(unsigned ll a, unsigned ll b){
    if(b == 0) return a;

    int a_prime = a % b;
    return euclid(b, a_prime);
}

int main(){
    unsigned ll a, b;
    cin >> a >> b;
    
    int result = euclid(a, b);
    cout << result << '\n';
    return 0;
}