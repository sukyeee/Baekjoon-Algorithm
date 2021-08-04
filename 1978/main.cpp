//1978
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int test, num, i;
    int cnt=0;
    cin >>test;
    
    for(int t=0;t<test;t++){
        cin>> num;
        
        for(i=2;i<=num;i++){
            if(num%i == 0) break;
        }
        if (i == num)cnt++;
    }
    cout << cnt;
    return 0;
}

