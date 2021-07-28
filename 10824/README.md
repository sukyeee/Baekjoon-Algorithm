# 10824

##
자연수 A, B, C, D 가 1~ 1000000 이므로 int를 사용하면 범위를 초과하여 런타임 에러가 나오므로 long 을 사용한다.  
A+B 와 C+D로 문자를 붙이고 stol로 숫자로 변환후 더해준다.


### 코드

```c++
//10824
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string A,B,C,D;
    unsigned long X, Y;
    cin >> A >> B >> C >> D;
    
    X = stol(A + B);
    Y = stol(C + D);
    
    cout << X+Y;
    
    return 0;
}

```
