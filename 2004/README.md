# 2004

##
1676번과 비슷하게, 2와 5배수의 개수들을 찾는 문제다.  
1676번은 입력이 500까지라 i%5, i%25, i%125까지 경우만 생각하면 됬었지만 2004번은 입력이 20억까지 들어온다.
2x5=10, 2x2x5=20, 2x2x2x5=40, 2x2x2x2x5=80...  
2x5x5=50, 2x5x5x5=250, 2x5x5x5x5=1250...  
2x2x5x5=100, 2x2x2x5x5x5 = 1000...  
2의의배수와 5의배수 개수 중 더 개수가 작은것과 0의 개수가 같다.
조합 nCm은 n!/m!(n-m)! 으로 나타낼 수 있다. 분자2나 5의 개수 - 분모2나 5의 개수라 생각하면  
n! 2의배수 - m! 2의배수 - (n-m)! 2의배수  
n! 5의배수 - m! 5의배수 - (n-m)! 5의배수  
중 더 작은값이 답이 된다.


### 코드

```c++
//2004
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n,m;
    cin>> n >> m;
    long long five_n=0, five_m=0,five_nm=0, two_n=0, two_m=0, two_nm=0;
    long long five=0, two=0;
    
    
    for(long long i=5; i<=n; i*=5){
        five_n += n/i;
    }
    for(long long i=5; i<=m; i*=5){
        five_m += m/i;
    }
    for(long long i=5; i<=(n-m) ; i*=5){
        five_nm += (n-m)/i;
    }
    
    for(long long i=2; i<=n; i*=2){
        two_n += n/i;
    }
    for(long long i=2; i<=m; i*=2){
        two_m += m/i;
    }
    for(long long i=2; i<=(n-m); i*=2){
        two_nm += (n-m)/i;
    }
    
    five = five_n - five_m - five_nm;
    two = two_n - two_m - two_nm;
    
    if(five > two) cout << two;
    else cout << five;
    
    return 0;
}



```
