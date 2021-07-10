# 9093

##

스택을 사용하여 palindrome을 구현했다.
공백이나 개행이 아닌 문자를 입력받으면 스택에 넣고, 공백이나 개행을 입력받으면 (스택이 비어있지 않을때) 스택의 top에 있는 문자를 출력한 후 pop을 해준다.

### 코드

```c++
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int test;
    int start = 0, end = 0;
    string input;
    string result;

    stack<char> st;

    cin >> test;
    cin.ignore();

    for (int t = 0; t < test; t++)
    {
        getline(cin, input);
        int num = input.length();

        for (int i = 0; i < input.length() + 1; i++)
        {
            if (input[i] == ' ' || input[i] == '\0' || input[i] == '\n')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else
            {
                st.push(input[i]);
            }
        }
    }

    return 0;
}
```
