#include <iostream>
#include <string>
using namespace std;

//10809
int main()
{
    string input;
    int result[26];
    for(int i=0;i<26;i++){
        result[i] = -1;
    }
    
    cin>>input;
    
    for(int i=0;i<input.length();i++){
        if(result[input[i] - 'a']  == -1) result[  input[i] - 'a' ] =  i;
    }
    
    for(int i=0;i<26;i++) cout << result[i] <<" ";
    
    
    return 0;
}
