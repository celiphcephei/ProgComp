#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    
    cin >> n >> k;

    int map[n][n];
    

   for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        int terreno;
        cin >> terreno;
        map[i][j]=terreno;
    }
   }
/*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }
    */

   int count = 0;

  
        

    for (int i=0; i<=n-k; i++) {
        for (int j=0; j<=n-k; j++) {
            if (map[i][j]==map[i][j+k-1]&&map[i][j]==map[i+k-1][j]&&map[i][j]==map[i+k-1][j+k-1]) {
                count++;
            }
        }
    }
   

   cout << count << endl;
    



    return 0;
}