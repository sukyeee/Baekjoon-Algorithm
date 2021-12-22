# 1932

##
문제 조건 - 아래층에 있는 수는 현재 층에서 선택된 수의 대각선 왼쪽 또는 대각선 오른쪽에 있는 것 중에서만 선택할 수 있다.  
합이 최대가 되는 경로에 있는 수의 합을 출력한다.  
  
        7               0층  
      3   8             1층  
    8   1   0           2층  
  2   7   4   4         3층  
4   5   2   6   5       4층  

예시의 삼각형을, 배열로 보면 triangle[0][0] = 7, triangle[1][0] = 3, triangle[1][1] = 8 ... 이다.  
dp배열에 현재 가질 수 있는 가장 큰 합을 저장한다.  
0층에는 7 하나밖에 없으므로 dp[0][0] = 7
1층 -   dp[1][0] = dp[0][0] + triangle[1][0] = 10  
        dp[1][1] = dp[0][0] + triangle[1][1] = 15  
2층 -   dp[2][0] = dp[1][0] + triangle[2][0] = 18  
        dp[2][1] = MAX(dp[1][0] + triangle[2][1] , dp[1][1] + triangle[2][1]) = 16    
        dp[2][2] = dp[1][1] + triangle[2][2] = 15  
3층 -   dp[3][0] = dp[2][0] + triangle[3][0] = 20   
        dp[3][1] = MAX(dp[2][0] + triangle[3][1] , dp[2][1] + triangle[3][1]) = 25  
        dp[3][2] = MAX(dp[2][1] + triangle[3][2] , dp[2][2] + triangle[3][2]) = 20  
        dp[3][3] = dp[2][2] + triangle[3][3] = 19  

```
if(j == 0) dp[i][0] = dp[i-1][0] + triangle[i][0];
else if(j == i ) dp[i][i] = dp[i-1][i-1] + triangle[i][i];
else    dp[i][j] = MAX(dp[i-1][j-1] + triangle[i][j], dp[i-1][j] + triangle[i][j]);
```
라는 식이 규칙이 성립한다.  
예제는 이 식을 이용해 4층(n-1)까지 구하면 dp[4][0] = 24, dp[4][1] = 30, dp[4][2] = 27, dp[4][3] = 26, dp[4][4] = 24  
4층 중 최대값을 구하면 30이다.

### 코드

```c++
//1932
#include <iostream>
using namespace std;
#define SIZE 501

int MAX(int a, int b){
    if(a>b)return a;
    else return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    int triangle[SIZE][SIZE]={0,};
    int dp[SIZE][SIZE]={0,};
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> triangle[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j == 0) dp[i][0] = dp[i-1][0] + triangle[i][0];
            else if(j == i ) dp[i][i] = dp[i-1][i-1] + triangle[i][i];
            else    dp[i][j] = MAX(dp[i-1][j-1] + triangle[i][j], dp[i-1][j] + triangle[i][j]);
        }
    }

    int max = dp[n-1][0];
    for(int i=0;i<n;i++)if( dp[n-1][i] > max) max = dp[n-1][i];

    cout << max;

   return 0;
}

```
