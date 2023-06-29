#include <iostream>

#define ll long long

using std::cout;
using std::cin;

unsigned ll GreatesCommonDivisor(unsigned ll a, unsigned ll b){
    int result = 0;
    for(unsigned ll i = 1; i <= (a + b); ++i){
        if((a % i == 0) && (b % i == 0)) result = i;
    }
    return result;
}

int main(){
    unsigned ll a, b;
    cin >> a >> b;
    int GCD = GreatesCommonDivisor(a, b);
    cout << GCD << '\n';
    return 0;
}