//  10799
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    string input;
    int cnt=0;
    stack<int> st;
    
    getline(cin, input);
    
    for(int i=0;i<100001;i++){
        if(input[i] == '\0') break;
    
        if(input[i] == '(') st.push('(');
        else if(input[i] == ')' && input[i-1] == '(') {
            st.pop();
            if(!st.empty()){
            if( st.top() == '(') cnt += st.size();
            }
        }
        else if(input[i] == ')' && input[i-1] == ')') { //파이프
            st.pop();
            cnt += 1;
            
        }
    }
    
    cout<< cnt;
    return 0;
}
