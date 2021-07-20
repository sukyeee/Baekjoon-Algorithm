# 1918

##
1. 영대문자 A~Z가 들어오면 스택에 넣지 않고 바로 출력
2. (  들어오면 스택에 push  
3. ) 들어오면 스택에 top이 ( 가 될때까지 출력하면서 pop  
4. 연산자 * / + - 가 들어오면 스택의 top을 확인한 후, 우선순위를 정해 연산한다  
    - *와 /가 들어오면 스택의 top에 자신보다 우선순위가 높은 *와 /가 먼저 나올경우 스택의 top에 있는 연산자를 먼저 출력 후 pop , 스택의 top이 그 외의 값이라면 입력 그대로 스택에 push
    - +와 /가 들어오면 스택의 top에 자신보다 우선순위가 높은 + - /  * 가 먼저 나올경우  스택의 top에 있는 연산자를 먼저 출력 후 pop , 스택의 top이 그 외의 값이라면 입력 그대로 스택에 push
    

### 코드

```c++
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//1918
int main()
{
    string input;
    stack<char> st;
    
    cin >> input;
    
    for(int i=0;i<input.length();i++){
        if(input[i] >= 65 && input[i] <= 90) cout << input[i];
        else {
            
            if(input[i] == '('){
                st.push('(');
            }
            else if(input[i] == ')'){
                while(st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.pop(); // '(' 일때 pop만
            }
            else if(input[i] == '*' || input[i] == '/'){
                while(!st.empty()){
                    if(st.top() == '*' || st.top() == '/'){
                        cout<<st.top();
                        st.pop();
                    }
                    else break;
                }
                st.push(input[i]);
            }
        
            else if(input[i] == '+' || input[i] == '-'){
                while(!st.empty()){
                    if(st.top() == '*' || st.top() == '/' || st.top() == '-' || st.top() == '+'){
                        cout<<st.top();
                        st.pop();
                    }
                    else break;
                }
                st.push(input[i]);
            }
        }
        
    }
    while (!st.empty()) {
        cout <<st.top();
        st.pop();
    }
    
    return 0;
}




```
