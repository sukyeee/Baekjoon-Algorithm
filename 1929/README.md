# 1929

##
일반적인 2중 for문을 사용하면 시간초과가 나오는 문제였다.  
넓은 범위의 소수 판별을 위하여 에라토스테네스의 체를 사용했다.


### 코드

```c++
//1929
#include <iostream>
using namespace std;
#define SIZE 1000000

int main(int argc, const char * argv[]) {

    int num[SIZE]={0,};
    int M,N;
    
    cin >> M >> N;
    
    for(int i=2;i<SIZE;i++)num[i] = 1; //모두 소수로 취급

    for(int i=2;i*i<=SIZE; i++){
        if(num[i]){ //소수인 것만
            for(int j=i*i;j<=SIZE;j+=i)num[j] = 0;
        }
    }
    for(int j=M;j<=N;j++){
        if(num[j] == 1) cout << j<< "\n";
    }
    return 0;
}





```
