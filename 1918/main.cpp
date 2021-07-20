#include <iostream>
#include <stack>
#include <string>
using namespace std;

//1918
int main()
{
    string input;
    stack<char> st;
    
    cin >> input;
    
    for(int i=0;i<input.length();i++){
        if(input[i] >= 65 && input[i] <= 90) cout << input[i];
        else {
            
            if(input[i] == '('){
                st.push('(');
            }
            else if(input[i] == ')'){
                while(st.top() != '('){
                    cout << st.top();
                    st.pop();
                }
                st.pop(); // '(' 일때 pop만
            }
            else if(input[i] == '*' || input[i] == '/'){
                while(!st.empty()){
                    if(st.top() == '*' || st.top() == '/'){
                        cout<<st.top();
                        st.pop();
                    }
                    else break;
                }
                st.push(input[i]);
            }
        
            else if(input[i] == '+' || input[i] == '-'){
                while(!st.empty()){
                    if(st.top() == '*' || st.top() == '/' || st.top() == '-' || st.top() == '+'){
                        cout<<st.top();
                        st.pop();
                    }
                    else break;
                }
                st.push(input[i]);
            }
        }
        
    }
    while (!st.empty()) {
        cout <<st.top();
        st.pop();
    }
    
    return 0;
}
