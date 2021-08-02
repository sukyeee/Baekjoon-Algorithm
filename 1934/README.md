# 1934

##
2609와 거의 동일
두 자연수 a b를 비교하여 더 큰수만큼 for문을 반복한다.  
a%i 와 b%i 나머지가 둘다 0일때의 i를 모두 곱하면 최대공약수이고,  
a=a/i 와 b=b/i 를 해서 더 큰 최대공약수가 나오지 않으면, 그때 a 와 b 와 최대공약수를 곱하면 최소공배수이다.

### 코드

```c++
//1934
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a,b, test;
    cin>> test;
    int large;
    
    for(int t=0;t<test;t++){
    cin >> a >> b;
    int min = 1;
    int max = 1;
    
    if(a > b) large = a;
    else large = b;
    
    for(int i=2;i <= large;i++){
        if((a % i ==0) && (b % i == 0)){
            a = a / i;
            b = b / i;
            min = min * i;
            i--;
        }
    }
    max = min * a * b;
    cout << max << "\n";
        
    }
    return 0;
}

```
