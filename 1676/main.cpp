//1676
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int num, cnt=0;
    string zero;
    cin >> num;
    
    for(int i=2;i<=num;i++) {
        if( i%5 == 0) cnt++;
        if(i%25 == 0) cnt++;
        if(i%125 == 0 )cnt++;
    }
    cout<<cnt;

    
    return 0;
}

