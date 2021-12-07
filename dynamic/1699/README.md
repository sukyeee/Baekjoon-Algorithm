# 1699

##

i보다 작은 j의 제곱수를 찾으면, 제곱수는 항 최소개수가 1이므로 최솟값을 찾을 수 있다.
i보다 작은 j의 제곱수를 찾고, square[i - (j*j)] + 1를 구하면 된다.

n은 최대 100000까지 들어 올 수 있고, 2초 시간제한이 있으므로

```for(int j=1; j*j<=i; j++)

```

j\*j<=i 를 이용하여 해결했다.

### 코드

```c++
//1699
#include <iostream>
#include <cmath>
using namespace std;

int MIN(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(int argc, const char * argv[]) {

    int n;
    int square[100001]={0};
    // square[1]= 1;

    cin >> n;

    for(int i=2;i<=n;i++){
        square[i]=99999;
        for(int j=1; j*j<=i; j++){
            square[i] = min(square[i], square[i - j*j]+1);
        }
    }
    cout << square[n];
    return 0;
}



```
