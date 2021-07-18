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

