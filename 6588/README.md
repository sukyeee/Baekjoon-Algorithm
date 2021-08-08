# 6588

##
1. 1929번을 풀때 사용했던 에라토스테네스의 체를 이용해 먼저 1~1000000까지 소수를 구해놓는다.
2. i=3 부터 n/2 까지( 3+17 과 17+3은 3+17를 출력), 소수인 홀수만 해당하니까 i+=2  
3. i가 홀수인 소수이고, n-i도 홀수인 소수일때 결과를 출력한다.  
4. 골드바흐의 추측은 1000000수까지 모두 성립하므로 홀수 소수의 합으로 n을 나타낼 수 없는경우는 존재하지 않아서 주석으로 표시해두었다.  

시간초과가 나서 main함수 안에 아래 두줄을 추가했더니 해결되었다.
```
cin.tie(NULL);  
ios::sync_with_stdio(0);
```


### 코드

```c++
//6588
#include <iostream>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    int num[SIZE]={0,};
    int n;
    
    for(int i=2;i<=SIZE;i++)num[i] = 1; //모두 소수로 취급
    for(int i=2;i*i<=SIZE; i++){
        if(num[i]){ //소수인 것만
            for(int j=i*i;j<=SIZE;j+=i)num[j] = 0;
        }
    }
    
    while(1)
    {
        cin >> n;
        if(n == 0) break;
        
        for(int i=3;i<=n/2;i+=2) //홀수만
        {
            if(num[i] == 0)continue;// 소수인 수만
//            else if(n-i < 0) {
//                cout << "Goldbach's conjecture is wrong.";
//                break;
//            }
            else if( num[i] == 1 && num[n-i] == 1)
            {
                cout<< n << " = " << i << " + " << n-i << "\n";
                break;
            }
        }
        
    }//while
    
    return 0;
}

```
