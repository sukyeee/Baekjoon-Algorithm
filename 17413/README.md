# 17413

##
<와 > 사이에있는 문자열은 큐에 넣어서 그대로 출력, 일반 문자열은 스택에 넣어서 거꾸로 출력했다.
일반 문자열은 시작태그 <를 만나거나 공백, 널문자를 만나면 거꾸로 출력되게 했고
< > 사이의 문자열은 <로 시작해서 >로 끝날때까지 큐에 넣고 그대로 출력했다

### 코드

```c++
//  17413
#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, const char *argv[])
{
    string input;
    stack<char> st;
    queue<char> q;
    getline(cin, input);
    
    for(int i=0;i<100001;i++){
        if( input[i] == ' ' || input[i] == '<' || input[i] == '\0') {
                while(!st.empty()){
                cout << st.top();
                st.pop();
                }
                if(input[i] == ' ') cout<< " ";
        }
        else if(input[i] != ' ') st.push(input[i]);
 
        if(input[i] == '<'){
            while(input[i] != '>'){
                q.push(input[i]);
                i++;
            }
            q.push('>');
            while(!q.empty()){
                cout << q.front();
                q.pop();
            }
        }
        
        if(input[i] == '\0')break;
        }
    return 0;
}


```
