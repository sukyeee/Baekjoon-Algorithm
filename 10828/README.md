# 10828

##

스택의 push, pop, empty, size를 배열을 사용해서 구현했다.

### 코드

```c++
#include <iostream>
using namespace std;
#define SIZE 1000000
int stack[SIZE];
int top;

void init()
{
    for (int i = 0; i < SIZE; i++)
        stack[i] = -1;
    top = -1;
}
void push(int num)
{
    top++;
    stack[top] = num;
}
void pop()
{
    if (top >= 0)
    {
        cout << stack[top] << endl;
        stack[top] = -1;
        top--;
    }
    else
        cout << "-1" << endl;
}

void empty()
{
    if (stack[0] == -1)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
void size()
{
    int cnt = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (stack[i] == -1)
            break;
        cnt++;
    }
    cout << cnt << endl;
}
int main(void)
{

    int test;
    string input;
    int num;
    cin >> test;
    init();

    for (int i = 0; i < test; i++)
    {
        // getline(cin, input);
        cin >> input;

        if (input == "push")
        {
            cin >> num; //숫자 하나 더받기
            push(num);
        }
        else if (input == "pop")
        {
            pop();
        }
        else if (input == "top")
        {
            if (top == -1)
                cout << "-1" << endl;
            else
            {
                cout << stack[top] << endl;
            }
        }
        else if (input == "size")
        {
            size();
        }
        else if (input == "empty")
        {
            empty();
        }
    }

    return 0;
}
```
