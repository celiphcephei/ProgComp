#include <bits/stdc++.h>
using namespace std;
#define LSOne(S) ((S) & -(S))
int main() {
    int N, ans = 0, dnum = 0;
    int* num = new int [N];

    string bnum;
    cin >> N;
    cin.clear();
	cin.ignore(200, '\n');
    getline(cin, bnum);
    
    int c = 0;
    for(auto& i: bnum){
        if(i == '1'){
            num[c] = 1;
            ++c;
        } else if(i == '0'){
            num[c] = 0;
            ++c;
        }
    }

    cout << "num[0] = " << num[0] << '\n';
    cout << "num[1] = " << num[1] << '\n';
    cout << "num[2] = " << num[2] << '\n';
    
    for(int i = 0; i < N; ++i){
        dnum += pow(2,i) * num[i];
    }
    
    cout << "dnum = " << dnum << '\n';

    for(int i = 0; i < (1<<dnum); ++i){
        int pos = i;
        while(pos){
        int ls = LSOne(pos);
        __builtin_ctz(ls) + 1;
        pos -= ls;
    }
        ++ans;
  }
    // printf("%d\n", ans);
}