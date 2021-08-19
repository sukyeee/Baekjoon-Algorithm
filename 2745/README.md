# 2745

##
11005와 반대로 B진수인 N을 10진수로 바꾸는 문제다.
trans안에 0~9와 10이상인 수는A~Z까지 모두 변환해주고,  
B^i * trans[i] 를 이용해 B진수->10진수로 변환해준다.  

### 코드
```c++
//2745
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {

    int B;
    string N;
    cin >> N >> B;
    int leng= N.length();
    int trans[SIZE];
    int num=0;
    
    for(int i=0;i<36;i++){
        if(N[i] >= '0' && N[i] <= '9') trans[leng-i-1] = N[i]-'0';
        else if (N[i] >= 'A' && N[i] <= 'Z') trans[leng-i-1] = N[i]-55;
    }
    
    for(int i=0;i<leng;i++){
        num += pow(B, i)* trans[i];
    }
    
    cout << num;
    
    return 0;
}


```
