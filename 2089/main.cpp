//2089
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int num;
    cin >> num;
    int mod[SIZE];
    
    for(int i=0;i<SIZE;i++)mod[i] = -1;
    if(num==0) {
        cout<<"0";
        return 0;
    }
    for(int i=0;i>=0;i++){
        if(num==0) break;
        
            if(num%2==1 || -num%2==1) {
                mod[i]=1;
                num = (num-1)/(-2);
            }
            else {
                mod[i]=0;
                num = num/(-2);
            }
    }

    for(int i=SIZE-1;i>=0;i--)if(mod[i] != -1) cout<<mod[i];
   
    return 0;
}

