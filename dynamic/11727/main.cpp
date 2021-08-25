//11727
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int dp[SIZE];
    int num;
    cin >> num;
    
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3;i<=SIZE;i++){
        dp[i] =  ( dp[i-1] + (dp[i-2]*2) ) % 10007;
    }
    cout << dp[num];
    
    return 0;
}



