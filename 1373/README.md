# 1373

##
2진수 -> 10진수 -> 8진수로 변환하게되면, 입력이 1,000,000까지 주어질 수 있으므로  
최대 문자열 길이 999,999 10진수는 2의999999승 값 이므로 int에 담을 수 없는 범위이기 때문에 오류가 발생한다.  
그러므로 2진수에서 바로 8진수로 변환하는 방법을 사용하였다.  
끝에서부터 3자리씩 끊어서 1일때  2^2, 2^1, 2^0를 곱해서 8진수를 만들어 출력해주는 방법을 사용하였다.
이때 3으로 나누어지지 않는 자리수의 경우 앞에 의미없는 0을 추가하여 3자리수를 맞춰주었다.  



### 코드

```c++
//1373
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    string num;
    cin>>num;
    
    while( num.length()%3 != 0) num = '0' + num;
    int n = num.length();
   
    for(int i=n%3;i<n;i+=3){
        cout << (num[i]-'0')*4 + (num[i+1]-'0')*2 + (num[i+2]-'0');
    }
    
   
    return 0;
}

```
