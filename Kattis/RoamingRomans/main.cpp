#include <bits/stdc++.h>
int main(){
    double x, mile = (1000 * ((double)5280 / 4854)); scanf("%lf", &x);
    x *= mile;
    printf("%d", (int)(x + 0.5));  
    return 0;
}