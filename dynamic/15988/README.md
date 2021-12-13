# 15988

##

1 -> 1 (1개)  
2 -> 1+1, 2 (2개)  
3 -> 1+1+1, 1+2, 2+1, 3 (4개)  
4 -> 1+3, 1+1+2, 2+2, 1+1+1+1, 1+2+1, 2+1+1, 3+1 으로, 1 2 3 숫자를 쓸 수 있으므로  
n=3일때의 모든 경우에 +1을 한것, n=2일때의 모든 경우에 +2, n=3일때의 모든 경우에 +3을 한것의 합이 n=4의 모든 경우의 수이다.  
그러므로 sum[i] = (sum[i-1] + sum[i-2] + sum[i-3])로 표현할 수 있다.  
범위 초과 문제로 % 1000000009 를 해주었다.

### 코드

```c++
//15988
#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    long long sum[1000001];
    long long result;

    cin >> n;
    sum[1] = 1;
    sum[2] = 2;
    sum[3] = 4;


    for(int t=0;t<n;t++) {
        cin >> result;
        for(int i=4;i<=result;i++){
            sum[i] = (sum[i-1] + sum[i-2] + sum[i-3]) % 1000000009;
        }
        cout << (sum[result]) % 1000000009 << "\n";

    }

    return 0;
}



```
