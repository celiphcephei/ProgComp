#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool sq(int n){
    if(n != 0 || n!= 1){
        float raiz = sqrt(n);
        float redondeado = floor(raiz);
        if ((raiz-redondeado)==0) return true;
    }
    return false;
}

int main(){
    int n, count = 0;
    cin >> n;

    string k;
    cin >> k;

    //int mivar = 1;
    for (int i=0; i<n; i++){
      string cachito = to_string(k[i]);
      int elnum = stoi(cachito);
      elnum = elnum - '0';
      if (elnum == 3 || elnum == 4 || elnum == 5 || elnum == 7 || elnum == 9) count++;
    }

    int elnum = stoi(k);
    if (is_prime(elnum) || sq(elnum)) count++;
    

    cout << count << '\n';

    return 0;
}