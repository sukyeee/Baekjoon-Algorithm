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
            st.pop();
        }
        
        st.push(i);
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
