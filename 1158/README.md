# 1158

##

n개 수열에서 k번째 선택된 수만 뽑아내는 것이니까
k번째 수가 아닌 수들은 모두 뒤로 push한 뒤 pop을 시켜주고,
k번째 수는 바로 pop과함께 출력시켜준다.

### 코드

```c++
//  1158
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, k;
    queue<int> q;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout << "<";

    while (!q.empty())
    {
        for (int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        if (q.size() != 1)
            cout << ", ";
        q.pop();
    }
    cout << ">";
    return 0;
}


```
