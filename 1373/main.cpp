//1373
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    string num;
    cin>>num;
    
    while( num.length()%3 != 0) num = '0' + num;
    int n = num.length();
   
    for(int i=n%3;i<n;i+=3){
        cout << (num[i]-'0')*4 + (num[i+1]-'0')*2 + (num[i+2]-'0');
    }
    
   
    return 0;
}

