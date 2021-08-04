# 1978

##
num%i 나머지가 0일때 i==num이면 자기자신을 제외하고 약수가 없다는 의미, 소수의 개수를 cnt++ 해준다.

### 코드

```c++
//1978
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int test, num, i;
    int cnt=0;
    cin >>test;
    
    for(int t=0;t<test;t++){
        cin>> num;
        
        for(i=2;i<=num;i++){
            if(num%i == 0) break;
        }
        if (i == num)cnt++;
    }
    cout << cnt;
    return 0;
}



```
