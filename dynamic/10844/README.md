# 10844

##
dp[n][i]에서 n은 주어진 수의 자리수, i는 그 자리수의 끝에있는 숫자라고 할 때,  dp[n][i]에는 n자리수 i로 끝나는 수의 개수를 저장한다.
dp[1][0~9]는 0으로 시작은 불가능하므로 1부터 9로 각각 1씩, 1자리 수인 계단수는 총 9개이다.  
dp[2][0]일때 끝자리수 바로 왼쪽 수는 dp[1][1]하나만 가능하므로 1개,  
dp[2][9]일때 끝자리수 바로 왼쪽 수는 dp[1][8]하나만 가능하므로 1개,  
dp[2][1~8]일때 끝자리수 바로 왼쪽 수는 dp[2][0]과 dp[2][9]와 다르게, 만약 dp[2][1]이면 dp[1][0], d[1][2] 둘다 가능하므로 총 2개이다.  
끝자리수가 1~8일때는 dp[n][n-1], dp[n-1][i+1] 두개의 합이고, 0과 9일때는 dp[n-1][i+1] 또는 dp[n-1][i-1] 와 같다.  길이가 N인 계단 수는 총 dp[N][0~9]의 합으로 표현할 수 있다.

### 코드
```c++
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

```
