#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int n, i;
    i=1;
    cin >> n;
    if (n==1){
        cout << "Jane" << "\n";
    }else if (n==2 || n==3){
        cout << "John" << "\n";
    }else{
        while (n>=3*i)
        {
            //cout << "n=" << n << "  " << "i=" << i << "\n";

            n=n-i;
            i=i+1;
        }
        cout << "n=" << n << "  " << "i=" << i << "\n";
        if ((n=!0)&&(n<3*i)&&(n=!2*i)&&(n>2*i)&&(n>i)){
            cout << "John" << "\n";
        }else{
            cout << "Jane" << "\n";
        }
    }
    
    return 0;
}