#include <iostream>
#include <stack>
#include <string>
#define SIZE 101
using namespace std;

//1935
int main()
{
    int test;
    int num[SIZE];
    string input;
    stack<double> st;
    
    cin>>test;
    cin>>input;
    
    for(int i=0;i<test;i++){
        cin>>num[i];
    }
    
    for(int i=0;i<input.length();i++){
        
        if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
            
            double y = st.top();
            st.pop();
            double x = st.top();
            st.pop();
            
            if(input[i] == '+'){
                st.push(x+y);
            }
            else if(input[i] == '-'){
                st.push(x-y);
            }
            else if(input[i] == '*'){
                st.push(x*y);
            }
            else if(input[i] == '/'){
                st.push(x/y);
            }
        }
        else { //A B C 영대문자 일때
            
            
            st.push(num[input[i] - 'A']);
            
            
        }
           
           
    }
    cout<<fixed;
    cout.precision(2);
    cout << st.top();
    
    return 0;
}

