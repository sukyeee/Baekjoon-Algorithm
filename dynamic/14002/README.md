# 14002

##

1~3번은 11053번과 동일하다.

1. lcs배열은 자기자신 포함하는 경우이므로 1으로 초기화
2. lcs[i]를 고정시켜놓고, lcs[j]를 inp배열 0부터 ~i까지 계속 반복해주면서 앞 배열에 자신보다 더 작은수가 갖고있는 최댓값에 +1을 해준다.
3. lcs 배열 중 가장 큰 수 출력 (= 가장 긴 증가하는 부분 수열의 길이)

4. 배열의 끝에서부터 가장 긴 증가하는 부분 수열의 길이와 lcs[i]값이 동일하면 , 해당 인덱스를 가지는 inp[i]를 result_lcs 배열에 넣어두고 출력한다.

배열의 끝에서부터 max_lcs값과 비교하는 이유는, 만약 배열의 처음 순서부터 비교할 때 lcs배열 값이 1 3 2 1 4 5 인 경우, 1 2 에서 멈추기때문에 1 4 5 라는 lcs를 찾지 못하는 경우가 생길 수도 있기 떄문이다.

### 코드

```c++
//14002
//14002
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

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

    int result_lcs[1001] = {0};

    cout << result << "\n";
    int max_lcs = result;
    int j = 0;
    for(int i=n-1;i>=0;i--){
        if(max_lcs == lcs[i]){
            result_lcs[result-j-1] = inp[i];
            max_lcs--;
            j++;
        }
    }

    for(int i=0;i<j;i++)cout << result_lcs[i] <<" ";
    return 0;
}

```
