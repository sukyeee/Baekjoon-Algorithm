#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int test;
    int flag = 0;
    string input;

    cin >> test;
    cin.ignore();
    for (int t = 0; t < test; t++)
    {
        stack<char> st;
        cin >> input;
        int size = input.size();
        for (int i = 0; i < input.length(); i++)
        {
            if (input[0] == ')') //처음부터 ) 나오면 NO
            {
                st.push(')');
                break;
            }

            if (input[i] == '(')
                st.push('(');
            else //)
            {
                if (!st.empty() && st.top() != ')')
                    st.pop();
                else
                    st.push(')');
            }
        }

        if (st.empty() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}