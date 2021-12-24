//11055
#include <iostream>
using namespace std;
#define SIZE 1001

int MAX(int a, int b){
    if(a>b)return a;
    else return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int n;
    int LIS[SIZE]={0,};
    int sum[SIZE]={0,}; //임시 값
    int dp[SIZE]={0,}; //최고값 저장
    
    cin >> n;
    for(int i=1;i<=n;i++) cin >> LIS[i];
    
    for(int i=1;i<=n;i++){
        
        sum[i] = LIS[i];
        for(int j=1;j<=i;j++){
            if(LIS[j] < LIS[i] && sum[i] < sum[j] + LIS[i]){
                sum[i] = sum[j] + LIS[i];
            }
        }
        
        dp[i] = MAX(dp[i-1], sum[i]);
    }
    
    cout << dp[n];
   return 0;
}
