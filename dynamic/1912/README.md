# 1912

##

1. seq[i][0]에는 이전 인덱스 seq[i-1][0] 와 seq[i-1][1] 둘중 더 큰값을 저장한다.
2. seq[i][1]에는 현재 들어오는 값 inp[i]와, seq[i-1][1] + inp[i] (누적 값) 을 비교하여 더 큰것을 저장한다.
3. 마지막 배열 seq[n-1][0] 과 seq[n-1][1]를 비교하여 더 큰값이 최대 연속합이다.

### 코드

```c++
//1912
#include <iostream>
using namespace std;

int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    long long seq[100001][2]={0,};
    long long inp[100001] = {0,};

    int n;
    cin >> n;
    for(int i=0;i<n;i++)cin >> inp[i];
    seq[0][0] = seq[0][1] =  inp[0];

    for(int i=1;i<n;i++){
        seq[i][0] = max(seq[i-1][0], seq[i-1][1]);
        seq[i][1] = max(inp[i], seq[i-1][1] + inp[i]);
    }
    long long result = max(seq[n-1][0], seq[n-1][1]);
    cout << result;
    return 0;
}


```
