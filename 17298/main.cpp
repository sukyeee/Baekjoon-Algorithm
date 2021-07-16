//  17298
#include <iostream>
#include <stack>
using namespace std;
#define SIZE 1000001
int main(int argc, const char *argv[])
{
    stack<int> st;
    int test;
    int NGE[SIZE] = {0,};
    
    cin >> test;
    for(int i=0;i<test;i++) cin >> NGE[i];
    
    for(int t=0;t<test;t++){
        int result=-1;
        while(!st.empty())st.pop();
       
        for(int i=test-1 ; i>=t+1; i--){
            st.push(NGE[i]); //거꾸로 넣음
        }
        
    
        while(!st.empty()){
           
            if(st.top() > NGE[t]) {
                result = st.top();
                st.pop();
                break;
            }
            else if (st.top() < NGE[t]) st.pop();
        }
     
        cout << result << " ";
        
    } //testcase
     
    return 0;
}
