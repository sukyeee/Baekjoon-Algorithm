# 1676

##
1. 끝자리 수가 2x5=10, 2x2x5=20, 2x2x5x5=100.. 등 5의배수의 개수에 따라 끝자리수0이 더해진다.  
2. 25는 5x5로 5를 2번 사용, 그리고 앞에 2가 2번이상 있으므로 25의배수는 0이2개 붙는다.
3. 125는 5x5x5로 5를 3번 사용, 앞에 2가 3번이상 있으므로 125의배수는 0이 3개 붙는다.
4. 5x5x5x5 나 5x5x5x5x5... 등 수가 있지만 n은 500까지 이므로 125까지 생각한다.


### 코드

```c++
//1676
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int num, cnt=0;
    string zero;
    cin >> num;
    
    for(int i=2;i<=num;i++) {
        if( i%5 == 0) cnt++;
        if(i%25 == 0) cnt++;
        if(i%125 == 0 )cnt++;
    }
    cout<<cnt;

    
    return 0;
}


```
