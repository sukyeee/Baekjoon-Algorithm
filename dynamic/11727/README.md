# 11727

##
11726번 문제와 비슷한 문제로, 2 x n 직사각형을 그림으로 그려 보면,  
2 x 1 하나를 놓으면 나머지는 2 x (n-1) 으로 채운것과 같고, 2 x 2 의 사각형 하나와 1 x 2 사각형 두개를 놓으면 2 x (n-2) 로 채운 그림과 같다.  
그래서 dp[i] =   dp[i-1] + (dp[i-2]*2) 식이 만들어진다. 이렇게 만들어진 수는 기하급수적으로 커지므로 10007으로 나눈 나머지를 출력한다.

### 코드
```c++
//11727
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int dp[SIZE];
    int num;
    cin >> num;
    
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3;i<=SIZE;i++){
        dp[i] =  ( dp[i-1] + (dp[i-2]*2) ) % 10007;
    }
    cout << dp[num];
    
    return 0;
}

```
