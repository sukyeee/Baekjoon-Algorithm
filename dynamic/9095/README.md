# 9095

##
1. n:1  1
2. n:2  1+1  /   2
3. n:3  1+1+1       1+2   /   2+1  /   3
4. n:4  (1+1+1)+1     (1+2)+1      (2+1)+1       (3)+1  /   (2)+2     (1+1)+2   /    (1)+3  
n일때, (n-1)의 모든 가지수에 1을 더한 횟수, (n-2)의 모든 가지수에 2를 더한 횟수, (n-3)의 모든 가지수에 3을 더한 횟수이므로
dp[i] =  ( dp[i-1] + (dp[i-2] + dp[i-3]) 식으로 표현할 수 있다.

### 코드
```c++
//9095
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 11

int main(int argc, const char * argv[]) {
  
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

```
