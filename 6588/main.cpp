//6588
#include <iostream>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {

    int num[SIZE]={0,};
    int n;
    
    for(int i=2;i<=SIZE;i++)num[i] = 1; //모두 소수로 취급
    for(int i=2;i*i<=SIZE; i++){
        if(num[i]){ //소수인 것만
            for(int j=i*i;j<=SIZE;j+=i)num[j] = 0;
        }
    }
    
    while(1)
    {
        cin >> n;
        if(n == 0) break;
        
        for(int i=3;i<=n/2;i+=2) //홀수만
        {
            if(num[i] == 0)continue;// 소수인 수만
            else if(n-i < 0) {
                cout << "Goldbach's conjecture is wrong.";
                break;
            }
            else if(n-i > 0 && num[i] == 1 && num[n-i] == 1)
            {
                cout<< n << " = " << i << " + " << n-i << "\n";
                break;
            }
        }
        
    }//while
    
    return 0;
}

