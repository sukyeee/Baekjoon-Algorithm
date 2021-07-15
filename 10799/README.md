# 10799

##
1. (이 들어오면 스택에 (를 push한다
2. ) 가 들어오면 그전에있는 stack을 확인해서 (이면 st의 사이즈를 더한다 (레이저)
3. ) 가 들어오면 그전에있는 stack을 확인해서 )이면 1을 더한다 (파이프의 끝)
```c++ if( st.top() == '(') cnt += st.size(); ``` 에서  스택이 비어있을때 top을 참조하면 오류가나서 if(!st.empty()) 조건이 없으면 런타임 에러가 난다.


### 코드

```c++
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    string input;
    int cnt=0;
    stack<int> st;
    
    getline(cin, input);
    
    for(int i=0;i<100001;i++){
        if(input[i] == '\0') break;
    
        if(input[i] == '(') st.push('(');
        else if(input[i] == ')' && input[i-1] == '(') {
            st.pop();
            if(!st.empty()){
            if( st.top() == '(') cnt += st.size();
            }
        }
        else if(input[i] == ')' && input[i-1] == ')') { //파이프
            st.pop();
            cnt += 1;
            
        }
    }
    
    cout<< cnt;
    return 0;
}
```
