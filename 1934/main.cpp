//1934
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a,b, test;
    cin>> test;
    int large;
    
    for(int t=0;t<test;t++){
    cin >> a >> b;
    int min = 1;
    int max = 1;
    
    if(a > b) large = a;
    else large = b;
    
    for(int i=2;i <= large;i++){
        if((a % i ==0) && (b % i == 0)){
            a = a / i;
            b = b / i;
            min = min * i;
            i--;
        }
    }
    max = min * a * b;
    cout << max << "\n";
        
    }
    return 0;
}
