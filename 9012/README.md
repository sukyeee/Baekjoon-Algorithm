# 9012

##

마지막에 스택 st가 비어있으면 YES출력, 비어있지 않으면 NO를 출력함

1. 괄호 짝이 () 이루어져야 하므로 처음부터 )가 나오면 스택에 )를 push 후 break 해서 NO 출력
2. ( 일때 스택에 (를 push
3. )일때 스택이 비어있지 않거나 top이 (일때는 스택의 top에있는 값을 pop함. 나머지 경우는 )를 push함

### 코드

```c++
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int test;
    int flag = 0;
    string input;

    cin >> test;
    cin.ignore();
    for (int t = 0; t < test; t++)
    {
        stack<char> st;
        cin >> input;
        int size = input.size();
        for (int i = 0; i < input.length(); i++)
        {
            if (input[0] == ')') //처음부터 ) 나오면 NO
            {
                st.push(')');
                break;
            }

            if (input[i] == '(')
                st.push('(');
            else //)
            {
                if (!st.empty() && st.top() != ')')
                    st.pop();
                else
                    st.push(')');
            }
        }

        if (st.empty() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
```
