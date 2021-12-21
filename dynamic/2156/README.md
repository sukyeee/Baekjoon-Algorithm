# 2156

##

'연속으로 놓여 있는 3잔을 모두 마실 수는 없다' 라는 조건이 있으므로 예시 `6, 10, 13, 9, 8, 1`에서 최대 연속2개까지 고를 수 있다.  
i = 1일때 마실 수 있는 최대 포도주 양은 dp[1] = wine[1] 이므로 6이다.  
i = 2일때 dp[2] = wine[1]+wine[2] 이므로 16이다.  
i = 3일때 dp[3] = wine[1]+wine[2], wine[2]+wine[3], wine[1]+wine[3]중 가장 큰 값인 10+13=23이다.  
i = 4일때는 dp[1]+ wine[3]+wine[4], dp[2] + wine[4], dp[3] 중 가장 큰 dp[1] + wine[3]+wine[4](6+13+9) 28이다.  
i = 5일때는 dp[2]+ wine[4]+wine[5], dp[3] + wine[5], dp[4] 중 가장 큰 dp[2] + wine[4]+wine[5](16+9+8) 33이다.  
i = 6일때는 dp[3] + wine[4]+wine[6], dp[4] + wine[6], dp[5] 중 가장 큰 dp[5] = 33이다.

즉 i >= 3일때, `dp[i] = MAX(dp[i-3] + wine[i] + wine[i-1], dp[i-2] + wine[i], dp[i-1])` 규칙이 성립한다.
배열은 0부터 시작하므로 0을 첫번째라 생각하고 풀었다.

### 코드

```c++
//2156
#include <iostream>
using namespace std;
#define SIZE 10001

long long MAX(long long a, long long b, long long c){
    return ( a>c ? ( a>b ? a:b ) : ( b>c ? b:c ) );
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

   int n;
    int wine[SIZE];
    long long dp[SIZE];

    cin >> n;
    for(int i=0;i<n;i++)cin >> wine[i];
    dp[0] = wine[0]; dp[1] = wine[0] + wine[1];
    dp[2] = MAX(dp[0]+wine[2], dp[1], wine[1]+wine[2]);

    for(int i=3;i<n;i++){
        dp[i] =
        MAX(dp[i-3] + wine[i] + wine[i-1],
            dp[i-2] + wine[i],
            dp[i-1]);
    }
    cout << dp[n-1];

   return 0;
}

```
