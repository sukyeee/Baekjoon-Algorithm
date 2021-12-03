# 11053

##

1. lcs배열은 자기자신 포함하는 경우이므로 1으로 초기화
2. lcs[i]를 고정시켜놓고, lcs[j]를 inp배열 0부터 ~i까지 계속 반복해주면서 앞 배열에 자신보다 더 작은수가 갖고있는 최댓값에 +1을 해준다.

### 코드

```c++
//11053
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int n;
    int lcs[1001]={1};
    int inp[1001]={0};
    int max_index = 0;
    lcs[0] = 1;

    cin >> n;
    for(int i=0;i<n;i++) cin >> inp[i];
    for(int i=0;i<n;i++) lcs[i] = 1; //초기화

    //정방향
    for(int i=0;i<n;i++){
        int max = 0;

        for(int j=0;j<i;j++){
            if(inp[i] > inp[j]){
                if(max < lcs[j]) max = lcs[j];
            }

        }
        lcs[i] = max + 1;

    }

    int result = 0;
    for(int i=0;i<n;i++){
        if(lcs[i] > result) result = lcs[i];
    }

    cout << result;

    return 0;
}


```
