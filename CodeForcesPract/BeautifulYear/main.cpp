#include <bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(), x.end()
int main() {
    int year; scanf("%d", &year);
    while(1) {
        ++year;
        string yearStr = to_string(year);
        sort(ALL(yearStr));
        yearStr.erase(unique(ALL(yearStr)), yearStr.end());
        if (yearStr.size() == 4) {
            printf("%d\n", year);
            break;
        }
    }
    return 0;
}
