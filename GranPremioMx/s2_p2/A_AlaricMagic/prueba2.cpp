#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, count = 0;
    cin >> n;
    string k;
    cin >> k;

    for (int i=0; i<n; i++){
      if(k[i] == '1' || k[i] == '2' || k[i] == '3' || k[i] == '4' ||k[i] == '5' ||k[i] == '7' ||k[i] == '9') count++;
    }

    cout << count << '\n';

    return 0;
}