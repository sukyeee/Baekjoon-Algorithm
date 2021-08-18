# 17103

##
에라토스테네스의 체(void Prime)를 사용하여 최대 입력 범위 1000000까지 소수인 수를 판별하고,  
i와  num-i가 둘다 소수인 수를 구하고, 한번 센 수는 다시 세지못하게 flag에 1로 표시해놓는다.  
소수의 순서만 다른 것은 같은 파티션으로 간주하므로 num/2 까지만 계산하면 된다.


### 코드
```c++
//17103
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1000000

int decimal[SIZE]; //소수

void Prime(){
    for(int i=2;i<=SIZE;i++)decimal[i]=1;
    
    for (int i = 2; i * i <= SIZE; i++)
        {
            if (decimal[i]) {
                for (int j = i * i; j <= SIZE; j += i)decimal[j] = 0;
            }
        }
   
}

int main(int argc, const char * argv[]) {

    int flag[SIZE];
    int test, num;
    cin>>test;
    Prime();
    
    for(int t=0;t<test;t++){
        int cnt=0;
        for(int i=2;i<=SIZE;i++)flag[i]=0;
        
        cin>>num;
        for(int i=2;i<=num/2;i++){
            if(flag[i] ==0 && flag[num-i] == 0){
                if( decimal[i] == 1 && decimal[num-i] == 1 ){
                    flag[i] = 1;
                    flag[num-i] = 1;
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}


```
