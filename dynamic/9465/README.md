# 9465

##

예시가
50 10 100 20 40  
30 50 70 10 60  
일때,

1. 맨 뒤의 열 60부터 생각해보면, 60은 그 전 대각선 20으로부터 오거나, 2칸 전 대각선 100으로 부터 온 값 중 큰것이 더해질수 있다.
   40은 전 대각선 10으로부터 오거나, 2칸 전 대각선 70으로부터 온 값 중 큰것이 더해질 수 있다.
2. 세번째 전 이후 대각선의 경우, i를 반복하며 더해지는 대각선이기 때문에 1번째 전, 2번째 전 대각선까지만 파악하면 된다.
3. 2번째 전 대각선까지는 파악해야하므로 0번째, 1번째 열은 0으로 초기화 해줘야 한다.

2번째 열부터 sticker배열에 input값을 저장하고, sticker[0][2] = 50 와 sticker[1][2] = 30은 그 전 대각선이 0이므로 그대로이고,
sticker[0][3] = 10은 첫번째 전 대각선 30과 두번째 전 0을 비교해서 큰 30을 누적한 40을 저장한다.  
sticker[1][3] = 50은 첫번째 전 대각선 50과 두번째 전 0을 비교해서 큰 50을 누적한 100을 저장한다.  
여기까지 하면  
50 40 100 20 40  
30 100 70 10 60

sticker[0][4] = 100은 첫번째 전 대각선 100과 두번째 전 30을 비교해서 큰 100을 누적한 200을 저장한다.  
sticker[1][4] = 70은 첫번째 전 대각선 40과 두번째 전 50을 비교해서 큰 50을 누적한 120을 저장한다.

50 40 200 20 40  
30 100 120 10 60

50 40 200 140 40  
30 100 120 210 60

50 40 200 140 250  
30 100 120 210 260

이런식으로 `i<n+2` 까지 반복해서 맨 마지막 열 두개중 큰 값이 최대 스티커 점수의 합이다.

### 코드

```c++
//9465
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

   int t, n;
   cin >> t;

   while (t--) {
      int sticker[2][100002] = { 0 };
      cin >> n;

      for (int i = 0; i < 2; i++) {
         for (int j = 2; j < n+2; j++) {
            cin >> sticker[i][j];
         }
      }
       sticker[0][0] = sticker[0][1] = sticker[1][0] = sticker[1][1] = 0;

      //1번째전 대각선, 2번째전 대각선 비교해서 큰값 더하기

       for(int i=2;i<n+2;i++){

           if(sticker[1][i-1] > sticker[1][i-2]){
               sticker[0][i] += sticker[1][i-1];
           }
           else {
               sticker[0][i] += sticker[1][i-2];
           }

           if(sticker[0][i-1] > sticker[0][i-2]) {
               sticker[1][i] += sticker[0][i-1];
           }
           else {
               sticker[1][i] += sticker[0][i-2];
           }
       }

       if(sticker[0][n+1] > sticker[1][n+1]) cout << sticker[0][n+1] << "\n";
       else cout << sticker[1][n+1] << "\n";


   }
   return 0;
}

```
