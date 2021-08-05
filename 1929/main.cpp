//1929
#include <iostream>
using namespace std;
#define SIZE 1000000

int main(int argc, const char * argv[]) {

    int num[SIZE]={0,};
    int M,N;
    
    cin >> M >> N;
    
    for(int i=2;i<SIZE;i++)num[i] = 1; //모두 소수로 취급

    for(int i=2;i*i<=SIZE; i++){
        if(num[i]){ //소수인 것만
            for(int j=i*i;j<=SIZE;j+=i)num[j] = 0;
        }
    }
    for(int j=M;j<=N;j++){
        if(num[j] == 1) cout << j<< "\n";
    }
    return 0;
}

