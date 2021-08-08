# 10872

##
 입력받은수가 1이나 0일때는 1을 출력하고 나머지 수는 재귀함수를 이용해서 출력했다.


### 코드

```c++
//10872
#include <iostream>
using namespace std;

int factorial(int num){
    
    if(num == 1 || num == 0) return 1;
    return num*factorial(num-1);
}
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int num, result;
    cin >> num;
    result = factorial(num);
    cout<<result;

    return 0;
}



```
