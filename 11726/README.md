# 11726

##
2 x n 직사각형을 그림으로 그려보면, n=2일때 2개, n=3일때 3개, n=4일때 5개 .. 이런식으로 진행된다.  
2 x n 직사각형은 2 x (n-1) 직사각형의 수와 2 x (n-2) 직사각형의 수를 합한 수와 같다. 피보나치 배열 형식으로 횟수가 더해진다.  
피보나치 배열은 수가 커지다보면 범위가 초과되어 제대로된 결과가 출력되지 않는다. 그래서 문제에 제시된 10007으로 나눈 나머지를 출력한다.  
왜 굳이 10007을 나누는가 궁금했는데, 10007은 1000보다 큰 소수 중 하나로 큰수를 표현하기 어려울때 나머지로 답이 맞는지 판단하기 위해 나누어주는 수라고 한다.


### 코드
```c++
//11726
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    
    int num;
    int rec[SIZE];
    memset(rec, 0, sizeof(int)*SIZE);
    cin>>num;
    rec[0] = 1;
    rec[1] = 1;
    for(int i=2;i<=SIZE;i++){
        rec[i] = ( rec[i-1]+rec[i-2] ) % 10007 ;
    }
    cout<<rec[num] ;
    
    return 0;
}

```
