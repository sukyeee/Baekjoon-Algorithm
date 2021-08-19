# 11005

##
mod에 N을 B로 나눈 나머지를 차례대로 저장하고, N은 다시 B로 나누어준다. 이것을 N (마지막 값이 몫)이 B보다 크거나 같을때까지 반복한다. alphabet배열에는 1~9~A~Z까지 저장해두고, alphabet[mod[i]]를 이용하여 진수에 맞는 값을 출력한다.  
alphabet[N]이 마지막에 남는 몫 값이고, mod배열에 저장된 나머지들을 거꾸로 출력하면 10진수 수를 B진법으로 바꿀 수 있다.

### 코드
```c++
//11005
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N,B;
    cin >> N >> B;
    int mod[SIZE];
    char alphabet[36];
    
    for(int i=0;i<10;i++)alphabet[i] = '0'+i;
    for(int i=0;i<26;i++ )alphabet[i+10] = 'A'+i;
    
    int j=0;
    while( N >= B ){
        mod[j] = N%B;
        N = N / B;
        j++;
    }
    cout<<alphabet[N];
    for(int i=j-1;i>=0;i--)cout<<alphabet[mod[i]];
    
    return 0;
}



```
