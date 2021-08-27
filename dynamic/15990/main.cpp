//15990
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 100001
long long dp[SIZE][4];

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int T, n;
    for(int i=0;i<SIZE;i++) memset(dp[i], 0, sizeof(int)*4);
    cin>> T;
    
    dp[1][1] = dp[2][2] = dp[3][3] = 1;
    dp[3][1] = dp[3][2] = 1;
    for(int i=4;i<=SIZE;i++){
           dp[i][1] = (dp[i-1][2] + dp[i-1][3])%1000000009;
           dp[i][2] = (dp[i-2][1] + dp[i-2][3])%1000000009;
           dp[i][3] = (dp[i-3][1]+ dp[i-3][2])%1000000009;
    }
    
    for(int i=0;i<T;i++){
        cin>> n;
        cout<<(dp[n][1] + dp[n][2] + dp[n][3])%1000000009 << "\n";
    }
    
    return 0;
}


