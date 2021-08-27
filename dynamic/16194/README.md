# 16194

##
11052번과 거의 같은 문제다.  
카드4개를 최솟값으로 뽑으려면 모든 카드팩을 뽑는 횟수를 생각해봐야 하므로 DP로 접근한다.  
dp[i-j]+p[j] 식을 이용하면,  ( i개 카드를뽑은만큼 j카드 개수을 뺀 dp값 ) +  ( j개 카드팩 ) 이므로
뽑는카드 개수보다(i) 카드팩의 개수(j)를 작게해서 모든 경우를 비교하여 작은 값을 dp[i]에 넣어준다.  
그러면 dp[ 구매하려는 카드 개수 ] 에 최솟값이 구해지게 된다.
### 코드
```c++
//16194
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int dp[SIZE];
    int num, test;
    
    cin >> test;
    int p[test+1];
    p[0]=0;
    for(int i=0;i<SIZE;i++)dp[i] = 0;
    for(int i=1;i<=test;i++){
        cin >> num;
        p[i] = num;
    }
    dp[0]=0;
    for(int i=1;i<=test;i++){
        for(int j=1;j<=test;j++){ //카드 팩
            if(i >= j){ //i = 선택하는 카드의 개수보다 j가 작아야 한다
               if(dp[i] == 0) dp[i] = p[i];
               if(dp[i]  > dp[i-j]+p[j]) dp[i] = dp[i-j]+p[j];
            }
        }
        
    }
    cout<< dp[test];
   
    
    return 0;
}


```
