//10844
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 101

long long dp[SIZE][10];

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int N;
    long long result = 0;
    cin >> N;
    for(int i=1;i<=9;i++) dp[1][i] = 1;
    
    for(int n=2;n <= N;n++){
        dp[n][0] = dp[n-1][1];
        dp[n][9] = dp[n-1][8];
        
        for(int i=0;i<=9;i++){
            if(i!= 0 && i != 9) dp[n][i] = (dp[n-1][i+1] + dp[n-1][i-1])%1000000000;
        }
    }
    for(int i=0;i<=9;i++) result = (result + dp[N][i])%1000000000;
    cout << result%1000000000;
    return 0;
}


