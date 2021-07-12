//  10866
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
    int test, num;
    string input;
    deque<int> q;
    
    cin >> test;
    cin.ignore();
    while(test--){
        cin >> input;
        if(input == "push_back"){
            cin >> num;
            q.push_back(num);
        }
        else if(input == "push_front"){
            cin >> num;
            q.push_front(num);
        }
        else if(input == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }
            else cout << "-1\n";
        }
        else if(input == "back"){
            if(!q.empty()){
            cout << q.back() << "\n";
            }
            else cout << "-1\n";
        }
        else if(input == "size"){
            cout << q.size() << "\n";
        }
        else if(input == "empty"){
            cout << q.empty() << "\n";
        }
        else if(input == "pop_front"){
            if (!q.empty()){
                cout << q.front() << "\n";
                q.pop_front();
            }
            else cout << "-1\n";
         
        }
        else if(input == "pop_back"){
            if (!q.empty()){
                cout << q.back() << "\n";
                q.pop_back();
            }
            else cout << "-1\n";
        }

        
    }
    
  
    return 0;
}
