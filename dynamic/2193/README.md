# 2193

##

피보나치 배열이다. 1자리수일때 1개, 2자리수일때 1개, 3자리수 2개, 4자리수 3개...  
부분문자열 11을 배제하면 끝자리가 1일때는 1개 추가, 끝자리가 0일때는 2개 추가 할 수 있으므로
피보나치로 배열이 만들어진다. int로는 자리수가 넘어가므로 long long배열에 저장했다.

### 코드

```c++
//2193
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    long long num[91] = {0};
    num[1] = num[2] = 1;

    cin >> n;
    for(int i=3;i<=90;i++){
        num[i] = num[i-1]+num[i-2];
    }

    cout << num[n];
    return 0;
}

```
