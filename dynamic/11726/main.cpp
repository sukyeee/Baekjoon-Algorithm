//11726
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int num;
    int rec[SIZE];
    memset(rec, 0, sizeof(int)*SIZE);
    cin>>num;
    rec[0] = 1;
    rec[1] = 1;
    for(int i=2;i<=SIZE;i++){
        rec[i] = ( rec[i-1]+rec[i-2] ) % 10007 ;
    }
    cout<<rec[num] ;
    
    return 0;
}



