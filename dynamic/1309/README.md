# 1309

##

lion[1] = 3, lion[2] = 7, lion[3] = 17, lion[4] = 41, ...  
lion[i] = (lion[i-1]\*2 + lion[i-2]) 규칙이 성립한다.

### 코드

```c++
//1309
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N;
    int lion[100001]={0};
    lion[1] = 3; lion[2] = 7;
    cin >> N;
    for(int i=3;i<=N;i++){
        lion[i] = (lion[i-1]*2 + lion[i-2]) % 9901;
    }

    cout <<lion[N];
    return 0;
}
```
