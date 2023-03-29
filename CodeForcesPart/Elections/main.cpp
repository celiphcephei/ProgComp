#include <bits/stdc++.h>

using namespace std;

int maxvalue(int arr[]);

//Incorrecto, como que se hacia con una linea de codigo en pythonXD

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int arr[3] = {a,b,c};
        int max = 0;
        max += maxvalue(arr);
        
        if(a == b and b == c){
            cout << (max - a) + 1 << ' ' << (max - b) + 1 << ' ' << (max - c) + 1 << '\n';
            continue;
        }
        if(a != max) a = (max - a) + 1;
        if(b != max) b = (max - b) + 1;
        if(c != max) c = (max - c) + 1;

        if(a == max) a = 0;
        if(b == max) b = 0;
        if(c == max) c = 0;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}

int maxvalue(int arr[]){
    int max = arr[0];
    for(int i = 1; i < 3; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}