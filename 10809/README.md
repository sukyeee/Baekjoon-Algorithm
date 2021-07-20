# 10809

##
입력받은 값 input[i] - 'a'를 하면 입력 문자의 인덱스 (a는 0, b는 1.. z는 25) 가 나온다.  
result[ input[i] - 'a' ] 가 -1이 아닐때는 이미 처음등장 위치를 기록한 알파벳이기 때문에,  
result[ input[i] - 'a' ] 의 현재 값이 -1일때만 result[ input[i] - 'a' ] = i 를 넣어주면 된다.



### 코드

```c++
#include <iostream>
#include <string>
using namespace std;

//10809
int main()
{
    string input;
    int result[26];
    for(int i=0;i<26;i++){
        result[i] = -1;
    }
    
    cin>>input;
    
    for(int i=0;i<input.length();i++){
        if(result[input[i] - 'a']  == -1) result[  input[i] - 'a' ] =  i;
    }
    
    for(int i=0;i<26;i++) cout << result[i] <<" ";
    
    
    return 0;
}


```
