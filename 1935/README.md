# 1935

##
후위표기식 : 숫자가 나올때는 스택에 push, 연산기호가 나올때는 마지막 두 수를 꺼내어 연산 기호로 연산 후 스택에 push한다  
스택을 float로 연산하면 반올림 때문인지 틀렸다고 나와서 double로 연산하니 정답이었다.
입력받은 수를 영대문자에 맞춰 변환하는 num[input[i] - 'A'] 식을 구하는것이 어려웠다.
input[i] - 'A' 니까 input[i]가 A면 num[0]번째 숫자, B면 num[1]번째 숫자를 뜻한다.

### 코드

```c++
#include <iostream>
#include <stack>
#include <string>
#define SIZE 101
using namespace std;

int main()
{
    int test;
    int num[SIZE];
    string input;
    stack<double> st;
    
    cin>>test;
    cin>>input;
    
    for(int i=0;i<test;i++){
        cin>>num[i];
    }
    
    for(int i=0;i<input.length();i++){
        
        if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
            
            double y = st.top();
            st.pop();
            double x = st.top();
            st.pop();
            
            if(input[i] == '+'){
                st.push(x+y);
            }
            else if(input[i] == '-'){
                st.push(x-y);
            }
            else if(input[i] == '*'){
                st.push(x*y);
            }
            else if(input[i] == '/'){
                st.push(x/y);
            }
        }
        else { //A B C 영대문자 일때
            
            
            st.push(num[input[i] - 'A']);
            
            
        }
           
           
    }
    cout<<fixed;
    cout.precision(2);
    cout << st.top();
    
    return 0;
}


```
