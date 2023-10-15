// @author: RenatoGM
#include <iostream>
using namespace std;
string day[7]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
#define debug(x) cout << #x << " = " << x << '\n'
int main(){
    int n; scanf("%d", &n);
    
    int y{1867}, count{0};
 
    for(int i{0}; i < n; ++i){
        ++y;
        count = (count + 1) % 7;
        
        if((y % 4 == 0 && y % 100 != 0 || y % 400 == 0)) count = (count + 1) % 7;
        //debug(count);
        //debug (y);
    }
    cout << day[count] << '\n';
 
    return 0;
}