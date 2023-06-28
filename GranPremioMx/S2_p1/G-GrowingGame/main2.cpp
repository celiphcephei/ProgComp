#include <iostream>

std::string findWinner(int N){
    bool dp [N + 1];
    dp[0] = false; 

    for (int i = 1; i <= N; i++){
        dp[i] = false;
        for (int j = 1; j <= i && j <= 3;j++){
            if (!dp[i - j]){
                dp[i] = true;
                break;
            }
        }
    }
    return dp [N] ? "Jane" : "John";

}   
int main(){
    int N;
    std::cin >> N;
    std::string winner = findWinner(N);
    std::cout << winner << std::endl;
    return 0; 

}