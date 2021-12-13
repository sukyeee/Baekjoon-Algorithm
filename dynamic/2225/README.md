# 2225

##

1 1 => 1, 2 1 => 1, 3 1 => 1, 4 1 => 1, 5 1 => 1, 6 1 => 1,  
1 2 => 2, 2 2 => 3, 3 2 => 4, 4 2 => 5, 5 2 => 6, 6 2 => 7,  
1 3 => 3, 2 3 => 6, 3 3=> 10, 4 3 => 15, 5 3 => 21, 6 3 => 28,  
1 4 => 4, 2 4 => 14, 3 4 => 28, 4 4 => 35, 5 4 => 56, 6 4 => 84, ...
규칙을 보면 sum[n][k] = sum[n-1][k] + sun[n][k-1]과 같다. ([n][k] = 자신의 왼쪽, 위의 합)  
수가 1000000000보다 커지므로 1000000000으로나눈 나머지를 저장하고, sum배열은 long long으로 지정했다.

### 코드

```c++
//2225
#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n, k;
    long long sum[201][201];

    cin >> n >> k ;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=k;j++){
            sum[i][j] = 1;

        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            sum[i][j] = (sum[i-1][j] + sum[i][j-1]) % 1000000000;
        }
    }

    cout << (sum[n][k])%1000000000;


    return 0;
}
```
