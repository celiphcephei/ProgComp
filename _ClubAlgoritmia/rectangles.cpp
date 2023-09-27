#include <bits/stdc++.h>
using namespace std;
long long w, h, n;

bool good(long long x){
    long long cant = (x/w)*(x/h);
    return cant >= n;
}

int main(){
    
}