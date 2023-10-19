#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, num, prev{0}; scanf("%d", &n);
    stack<int> events;
    for(int i{0}; i < n; ++i){
	if(!events.empty() && events.top() > 0){
            prev = events.top();
	    events.pop();
	}
        scanf("%d", &num);
	num += prev;

    }
    return 0;
}
