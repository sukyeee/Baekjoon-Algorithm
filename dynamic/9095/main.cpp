//9095
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 11

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int dp[SIZE];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4;i<=SIZE;i++){
        dp[i] =  ( dp[i-1] + (dp[i-2] + dp[i-3]) );
    }
    
    int num, test;
    cin >> test;
    for(int i=0;i<test;i++){
        cin >> num;
        cout << dp[num] << "\n";
    }
    
    return 0;
}



