# 17087

##
수빈이의 위치 S와 동생들의 위치의 차를 num[i]에 저장해두고,
num배열을 순회하면서 GCD(최대공약수)를 구한다. 

### 코드

```c++
//17087
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int GCD(int a, int b){
    
    while(1){
        if(a%b == 0) break;
        else {
            int x = b;
            b = a%b;
            a = x;
        }
    }
    return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n,s, num[100001];
    cin >> n;
 
    cin >>s;
    for(int i=0;i<n;i++)cin>>num[i];
    for(int i=0;i<n;i++){
        if(num[i] > s )num[i] = num[i] - s;
        else num[i] = s - num[i];
    }
    
       int sum=num[0];
        for(int i=1;i<n;i++){
            sum = GCD(sum, num[i]);
        }
    if(n == 1) {
        sum = num[0];
    }
    cout<<sum;
    
    return 0;
}



```
