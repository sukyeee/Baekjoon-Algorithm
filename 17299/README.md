# 17299

##

17298번과 유사한 방법으로,
input배열에는 들어오는 수 예제) 1 1 2 3 4 2 1 를 넣고  
cnt배열에는 입력값으로 등장하는 횟수의 값을 넣는다. (1 등장 시 cnt[1]++, 2 등장 시 cnt[2]++)  
st스택에서는 입력의 인덱스를 순서대로 넣어가며 0번째인덱스 : input[0] = 1 부터 시작해서  
cnt[input[st.top()]] : st 맨위의 인덱스가 가리키는 input 즉, "1"의 등장 횟수 와  
cnt[input[i]] : input의 i번째 비교대상, ( 오른쪽에 있으면서 등장횟수가 큰수 중 가장 왼쪽 수) 인 "1"의 횟수 비교해서  
cnt[input[i]] 가 더 크면 result[st.top()] : st.top() (인덱스)의 result인덱스에 input[i] (오큰수) 를 넣는다.  
오큰수를 찾으면 pop을 해주고, 스택이 빌때까지 반복한다.  
오큰수를 찾지 못한 값들은 모두 -1처리 해준다.

### 코드

```c++
#include <iostream>
#include <stack>
#define SIZE 1000001
using namespace std;
int result[SIZE];
int input[SIZE];
int cnt[SIZE];
int inp;

int main()
{
    int test;
    stack<int> st;
    cin >> test;

    for(int i=0;i<test;i++){
        cin >> input[i];
        cnt[input[i]]++;
    }

    st.push(0); //인덱스
    for(int i=1;i<test;i++){
        while(!st.empty() && cnt[input[st.top()]] < cnt[input[i]] ){
            result[st.top()] = input[i];
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        result[st.top()] = -1;
        st.pop();
    }

    for(int i=0;i<test;i++)cout << result[i] <<" ";

    return 0;
}


```
