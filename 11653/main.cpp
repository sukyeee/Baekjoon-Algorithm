//11653
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int num;
    cin>>num;
    
     int i=2;
    while( num != 1 ){
        
            if(num % i == 0){
                cout << i << "\n";
               num = num / i;
            }
            else i++;
            
    }
        return 0;
}



