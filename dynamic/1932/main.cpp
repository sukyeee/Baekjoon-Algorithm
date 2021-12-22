//1932
#include <iostream>
using namespace std;
#define SIZE 501

int MAX(int a, int b){
    if(a>b)return a;
    else return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int n;
    int triangle[SIZE][SIZE]={0,};
    int dp[SIZE][SIZE]={0,};
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> triangle[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j == 0) dp[i][0] = dp[i-1][0] + triangle[i][0];
            else if(j == i ) dp[i][i] = dp[i-1][i-1] + triangle[i][i];
            else    dp[i][j] = MAX(dp[i-1][j-1] + triangle[i][j], dp[i-1][j] + triangle[i][j]);
        }
    }
    
    int max = dp[n-1][0];
    for(int i=0;i<n;i++)if( dp[n-1][i] > max) max = dp[n-1][i];
    
    cout << max;
    
   return 0;
}
