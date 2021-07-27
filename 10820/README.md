# 10820

##
아스키코드 번호를 활용하여 각 문자에 해당하는 입력이 들어오면 +1씩 더해준다


### 코드

```c++
#include <iostream>
#include <string>
using namespace std;

//10820
int main()
{
    string input;
    while(true){
        int large=0, small=0, num=0, space=0;
        getline(cin,input);
        if(input.empty())break;
        for(int i=0;i<input.length();i++){
            
            if(input[i] >= 65 && input[i] <= 90) //대문자
            {
                large++;
            }
            else if(input[i] >= 97 && input[i] <= 122) //소문자
            {
                small++;
            }
            else if(input[i] >= 48 && input[i] <= 57 ) //숫자
            {
                num++;
            }
            else if(input[i] == 32 ) //공백
            {
                space++;
            }
            
        }
        cout<< small << " " << large << " " << num << " " << space << "\n";
    }
    
    return 0;
}



```
