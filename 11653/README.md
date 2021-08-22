# 11653

##
처음에는 각 수가 소수인지 판별하여, 소수인 수로 나누어서 나머지가0인 수를 모두 출력하는 방법으로 진행했다.  
정수 범위가 10,000,000 까지여서 그런지 런타임 에러가 나왔다. 
애초에 i=2부터 시작하여 num/i로 나누어지는 i는 모두 소수이기 때문에, 굳이 처음부터 소수를 판별하지 않고 while문 하나로 처리하는 방식으로 변경했다.  
→ num을 입력받아서, i를 2이상인 수로 num이 i보다 작아질때까지 반복해서 나누고, 나머지가 0이면 소인수분해 결과 값으로 출력한다.



### 코드
```c++
//11653
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int num;
    cin>>num;
    
     int i=2;
    while( num != 1 ){
        
            if(num % i == 0){
                cout << i << "\n";
               num = num / i;
            }
            else i++;
            
    }
        return 0;
}








```
