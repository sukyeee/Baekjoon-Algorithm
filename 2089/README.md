# 2089

##
입력받은 수 num을 0이나올때까지 -2로 나누어주고 그때의 나머지들을 출력한다.  
-2진법은 0아니면 1으로 표현되므로, 나머지를 0또는 1로 만들기 위해 홀수가 들어올때는 (num-1)를 해준 후에 -2로 나눠준다.


### 코드
```c++
//2089
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {

    int num;
    cin >> num;
    int mod[SIZE];
    
    for(int i=0;i<SIZE;i++)mod[i] = -1;
    if(num==0) {
        cout<<"0";
        return 0;
    }
    for(int i=0;i>=0;i++){
        if(num==0) break;
            if(num%2==1 || -num%2==1) {
                mod[i]=1;
                num = (num-1)/(-2);
            }
            else {
                mod[i]=0;
                num = num/(-2);
            }
        
    }

    for(int i=SIZE-1;i>=0;i--)if(mod[i] != -1) cout<<mod[i];
   
    return 0;
}


```
