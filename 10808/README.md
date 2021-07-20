# 10808

##
알파벳 소문자를 alphabet[0]=a, alphabet[1]=b ... alphabet[25]=z 배열에 넣어두고,  
입력받은 값에서 'a'문자(=97)를 뺀 값으로 ( input[i]-'a' )  
result배열에 영소문자의 개수를 각각 저장한다. (result[0]=a의개수, result[1]=b의개수 ... result[25]=z의 개수)  


### 코드

```c++
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



```
