# 11655

##

A~M 까지는 아스키코드 값에 +13, N~Z까지는 -13 해줘서 변환해준다. (영소문자도 똑같이)

### 코드

```c++
//11655
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    getline(cin,input);

    for(int i=0;i<input.length();i++){
        if( (input[i] >= 65 && input[i] <= 77 ) ) input[i] = (input[i]) + 13;
        else if( input[i] >= 78 && input[i] <= 90) input[i] = input[i] - 13;
        else if(input[i] >= 97 && input[i] <= 109) input[i] = input[i] + 13;
        else if(input[i] >= 110 && input[i] <= 122) input[i] = input[i] - 13;
    }

    for(int i=0;i<input.length();i++)cout<< input[i];
    return 0;
}



```
