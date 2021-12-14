# 1149

##

[i+1][0]번째 줄 -> 0번째를 제외한 [i][1], [i][2]번째와의 합 중 최솟값,  
[i+1][1]번째 줄 -> 1번째를 제외한 [i][0], [i][2]번째와의 합 중 최솟값,  
[i+1][2]번째 줄 -> 2번째를 제외한 [i][0], [i][1]번째와의 합 중 최솟값 을 코드로 나타내면

```
RGB[i+1][0] = MIN(RGB[i+1][0] + RGB[i][1], RGB[i+1][0] + RGB[i][2]);
RGB[i+1][1] = MIN(RGB[i+1][1] + RGB[i][0], RGB[i+1][1] + RGB[i][2]);
RGB[i+1][2] = MIN(RGB[i+1][2] + RGB[i][0], RGB[i+1][2] + RGB[i][1]);
```

N-1까지 누적한 후, RGB[N-1][0], RGB[N-1][1], RGB[N-1][2] 중 최솟값이 모든 집을 칠하는 비용의 최솟값이다.

### 코드

```c++
//1149
#include <iostream>
#include <cmath>
using namespace std;

long long MIN(long long a,long long b){
    if(a<b)return a;
    else return b;
}
long long MIN3(long long a,long long b, long long c){
    return ( a<c ? ( a<b ? a:b ) : ( b<c ? b:c ) );
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N;
    long long RGB[1001][3] = {0,};
    cin >> N;
    for(int i=0;i<N;i++) cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];

    for(int i=0;i<N-1;i++){
        RGB[i+1][0] = MIN(RGB[i+1][0] + RGB[i][1], RGB[i+1][0] + RGB[i][2]);
        RGB[i+1][1] = MIN(RGB[i+1][1] + RGB[i][0], RGB[i+1][1] + RGB[i][2]);
        RGB[i+1][2] = MIN(RGB[i+1][2] + RGB[i][0], RGB[i+1][2] + RGB[i][1]);
    }
    cout << MIN3(RGB[N-1][0], RGB[N-1][1], RGB[N-1][2]);

    return 0;
}

```
