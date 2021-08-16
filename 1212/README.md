# 1212

##
1373번과 비슷한 , 8진수->2진수로 변환하는 문제다.
주어지는 수 길이는 333,334을 넘지 않으므로 8진수가 333,333 이면 x3인 2진수는 999,999개이다.
8진수->10진수->2진수를 거치게되면 1373번과 마찬가지로 담을 수 없는 범위이므로 8진수->2진수로 바로 변환하여 출력했다. 
0을 제외하고 모두 1로시작해야 하므로 if(i==0 && num[i]-'0' <=3 )조건을 추가하였다.


### 코드

```c++
//1212
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    string num;
    cin>>num;
    string result;
    
    for(int i=0;i<num.size();i++){
        
        if(i==0 && num[i]-'0' <=3 ){
            if(num[i]-'0'>=2) cout << (num[i]-'0')/2 << (num[i]-'0')%2;
            else if(num[i]-'0'==1) cout << "1";
            else if(num[i]-'0'==0) cout<< "0";
        }
        
        else if(num[i]-'0'>=4) cout << (num[i]-'0')/4 << ((num[i]-'0')%4)/2 << ((num[i]-'0')%4)%2;
        else if(num[i]-'0'>=2) cout << "0" << (num[i]-'0')/2 << (num[i]-'0')%2;
        else if(num[i]-'0'==1) cout << "001";
        else if(num[i]-'0'==0) cout << "000";
      
    }
    
   
    return 0;
}

```
