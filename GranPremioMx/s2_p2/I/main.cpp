#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int res = n / k;
    if(res>=m) cout << "Iron fist Ketil\n";
        else cout << "King Canute\n";
    return 0;
}