#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int test;
    int index = 0;
    int inp;

    cin >> test;
    cin.ignore();
    stack<int> st;
    vector<char> v;
    vector<int> input;

    for (int i = 0; i < test; i++)
    {
        cin >> inp;
        input.push_back(inp);
    }

    for (int i = 0; i < test; i++)
    {
        for (int j = index; j < test; j++)
        {
            st.push(j + 1); //1부터 push
            v.push_back('+');

            while (!st.empty())
            {
                if (st.top() == input[i])
                {
                    st.pop();
                    v.push_back('-');
                    index = j + 1;
                    i++;
                }
                else
                    break;
            }
        }
    }

    if (st.empty())
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << "\n";
    }
    else
        cout << "NO";

    return 0;
}