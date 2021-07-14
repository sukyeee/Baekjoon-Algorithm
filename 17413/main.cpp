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
