# 9613

##
num배열에 수를 입력받고, 내림차순으로 정렬한다.  
모든 쌍의 수에 대하여 유클리드 호제법(GCD 함수)을 이용해 나머지가0일때 b값을 더해주는 식으로 모든 쌍의 GCD 합을 구했다.   
입력으로 주어지는 수는 1000000을 넘지 않지만 sum은 값이 int형 범위를 초과할 수 있으므로 long long으로 해주었다.


### 코드

```c++
//9613
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool desc(int a, int b){
    return a>b;
}
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

    int t, n, num[101];
    cin >> t;
 
    for(int z=0;z<t;z++){
        long long sum=0;
        cin >>n;
        for(int i=0;i<n;i++)cin>>num[i];
        
        sort(num, num+n, desc);  //내림차순 정렬
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum += GCD(num[i], num[j]);
            }
        }
        
        cout<<sum<<"\n";
    }
    
    return 0;
}

```
