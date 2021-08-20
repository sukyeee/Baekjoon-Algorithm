# 11576

##
문제 조건에서 A진법으로 나타낸 수를 10진법으로 변환하였을 때의 값은 양의 정수이며 220보다 작다. 라고 했으므로 A진수 -> 10진수 -> B진수로 변환하는 방법을 사용했다.  
각 자리수를 decimal += pow(A,i)*num[m-i-1];로 10진수로 변환 후,  
나머지를 mod배열에 저장 하고, 마지막 남은 decimal 값(몫)먼저 출력 후 mod를 거꾸로 출력하여 B진수로 변환했다.

### 코드
```c++
//11576
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {

    int A,B,m;
    int num[SIZE];
    int mod[SIZE];
    int decimal = 0;
    
    cin>> A >> B;
    cin >> m;
    for(int i=0;i<m;i++)cin>>num[i];
    
    for(int i=0;i<m;i++){
        decimal += pow(A,i)*num[m-i-1];
    }
    int j=0;
    while(decimal >= B){

        mod[j] = decimal%B;
        decimal = decimal/B;
        j++;
    }
    cout << decimal << " ";
    for(int i=j-1;i>=0;i--) cout << mod[i] << " ";
    
    return 0;
}




```
