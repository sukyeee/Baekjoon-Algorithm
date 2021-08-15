//1373
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    string num;
    
    cin>>num;
    int n = num.length();
    
    long long two[n];
    long long eight[n];
    int cnt = 0, j=0;
    
    for(int i=0;i<n;i++){two[i] = num[i]-'0'; eight[i]=0;}
    
    for(int i=n-1;i>=0;i--){
        if(two[i] == 1){
            eight[j] += pow(2,cnt );
        }
        cnt++;
        
        if(cnt%3==0){
            j++;
            cnt=0;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(eight[i] != 0) cout<<eight[i];
        else if(eight[0] == 0) {
            cout << "0";
            break;
        }
        
    }
    return 0;
}

