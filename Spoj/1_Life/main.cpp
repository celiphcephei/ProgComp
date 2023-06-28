#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> nums;
    int x = 0;
    while(x != 42){
        cin >> x;
        nums.push_back(x);
    }
    for(int i = 0; i < nums.size() - 1 ; i++) cout << nums[i] << '\n';
	return 0;
}