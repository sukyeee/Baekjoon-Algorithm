# 1463

##
정수 X에 사용할 수 있는 연산은 세가지로, 예시로 주어진 10의 경우, 10->5->4->2->1 또는 10->9->3->1 등 여러가지가 될 수 있다. 2로 나누어지거나 3으로 나누어진다고 무조건 나누면 최소횟수를 구할 수 없다.  
dynamic programming 방법으로  숫자1부터 10^6수까지를 계산해두고 출력했다.  
1. i가 3과 2로나누어 지는 경우, count[i/3]+1과 count[i/2]+1, count[i-1]+1 모든 연산의 최솟값을 비교하여 저장
2. i가 3으로 나누어지는 경우 count[i/3]+1 과 count[i-1]+1 중 최솟값 저장
3. i가 2로 나누어지는 경우 count[i/2]+1 과 count[i-1]+1 중 최솟값 저장
4. 1~3번 모두 속하지 않는 경우 count[i-1]+1 값 저장  
count[i]는 해당 수의 최솟값을 저장해 둔 배열이므로, count[i]에서는 1 작은수 count[i-1] + 1 이거나, 나누어지는 수 2나 3으로 나눈 수의 최솟값 + 1으로 해당 수의 최솟값을 구할 수 있다.

### 코드
```c++
///1463
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1000000

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int count[SIZE]; //최소횟수만 저장
    
    int num;
    memset(count, 0, sizeof(int)*SIZE);
    count[1] = 0;
    count[2] = 1;
    count[3] = 1;
    
    cin>>num;
    
    for(int i=3;i<=SIZE;i++){
        //1. num%3 == 0 이면 num/=3
        //2. num%2 == 0 이면 num/=2
        //3. num = num - 1
        
        if( i%2==0 && i%3 ==0 ){
            if( count[i/3] + 1 < count[i/2] + 1 ){
                count[i] = count[i/3] + 1;
            }
            else count[i] = count[i/2] + 1;
                
            if (count[i-1]+1 < count[i]) count[i] = count[i-1]+1;
        }
        else if(i%3==0) {
            if(count[i/3] + 1 < count[i-1]+1){
                count[i] =count[i/3] + 1;
            }
            else count[i] = count[i-1]+1;
        }
        else if(i%2==0){
            if(count[i/2] +1 < (count[i-1]+1)) {
                count[i] = count[i/2] + 1;
            }
            else count[i] = count[i-1]+1;
            
        }
        else count[i] = count[i-1]+1;
    
    }
    cout<< count[num];
    return 0;
}

```
