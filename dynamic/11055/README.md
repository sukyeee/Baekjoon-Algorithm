# 11055

##

sum배열에는 LIS[i]보다 작은 LIS[j]이면서,  sum[j] + LIS[i] 값이 기존 sum[i]보다 클때 sum[i]를 갱신한다.  
dp배열에서는 이전 dp값과 업데이트된 sum값중 큰 값을 저장한다.  
배열의 1번째부터 시작했으므로 dp[n]번째 저장된 값이 LIS값이다.  
예시를 예로 들면,  
  
[1] [2] [3] [4] [5] [6] [7] [8] [9] [10]  
1   100  2  50  60   3   5   6   7   8  
   
    sum     dp  
[1]  1      1           -> sum, dp의 초기값은 LIS[1]  
[2]  101    101         -> sum[1] + LIS[2] = 101 이므로 sum = 101  
[3]  3      101         -> sum[1] + LIS[3] = 3 이므로 sum = 3, (LIS[2] > LIS[3] 이므로 sum[2]+LIS[3]는 X)  
[4]  53     101         -> sum[3] + LIS[4] = 53  
[5]  113    113         -> sum[4] + LIS[5] = 113  
[6]  6      113         -> sum[3] + LIS[6] = 6  
[7]  11     113         -> sum[6] + LIS[7] = 11  
[8]  17     113         -> sum[7] + LIS[8] = 17  
[9]  24     113         -> sum[8] + LIS[9] = 24  
[10] 32     113         -> sum[9] + LIS[10] = 32  

즉, LIS[i]보다 작은 LIS[j]일때의 sum[j]만 보고 LIS[j]와의 값이 가장 클때를 본다.  
LIS[i]보다 LIS[j]가 작아야 증가하는 수열이 될 수 있음, LIS[i]보다 LIS[j]가 큰 경우, sum[j]는 더 큰 LIS[j]가 포함된 경우이므로 증가하는 수열이 아님


### 코드
```c++
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

```
