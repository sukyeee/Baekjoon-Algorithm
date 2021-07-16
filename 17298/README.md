# 17298

##
입력받은 수를 a[i] 배열에 차례로 넣고, st에는 인덱스 값을 넣는다.
스택이 비어있지 않고, 스택의 맨위에 있는 인덱스가 가리키는 수 보다 a[i] 가 크다면 오큰수이다.
오큰수를 찾으면 결과 값 v배열의 top 인덱스에 오큰수 값 a[i]를 넣는다.
찾으면 pop 하여 스택에 남아있는 수도 오큰수를 찾으면 해당작업을 반복한다.
오큰수를 찾지 못한 수는 스택에 남아있고, 모두 해당 인덱스에 -1를 넣어준다.


### 코드

```c++
#include <iostream>
#include <stack>

using namespace std;
int a[1000001];
int v[1000001];
int main()
{
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++) {
        cin >> a[i];
    }
    stack<int> st;
    st.push(0);
    for (int i = 1; i < test; i++) {
    
        while (!st.empty() && a[st.top()] < a[i]) { //오큰수 찾음
            v[st.top()] = a[i];
            st.pop(); //오큰수 찾은건 다시 pop
        }
        st.push(i); //현재 idx를 push
    }
    
    while (!st.empty()) { //오큰수 없는 수
        v[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < test; i++) {
        cout<< v[i] << " ";
    }
    return 0;
}


```
