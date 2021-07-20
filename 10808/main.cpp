#include <iostream>
#include <stack>
#include <string>
using namespace std;

//10808
int main()
{
    string input;
    char alphabet[26];
    int result[26]={0};
    for(int i=0;i<26;i++){
        alphabet[i] = 'a'+i;
    }
    
    cin>>input;
    
    for(int i=0;i<input.length();i++){
        result[ input[i]-'a' ]++;
    }
    
    for(int i=0;i<26;i++) cout << result[i] <<" ";
    
    
    return 0;
}
