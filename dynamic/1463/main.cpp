//1463
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



