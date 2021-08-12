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
    
    if(num == "0") {
        cout << "0";
        return 0;
    }
    int two[n];
    int sum = 0;
    
    for(int i=0;i<n;i++)two[i] = num[i]-'0';
    for(int i=0;i<n;i++){
       int a = pow(2,(n-i)-1);
        if(two[i] == 1) sum += a; //sum 204
    }
    int N = sum;
    int cnt=0;
    while(N>0){
        N = N/10;
        cnt++;
    }
    int mod[cnt];
  
    for(int i=0;i<cnt;i++){
        mod[i] = sum%8;
        sum=sum/8;
    }
    
    for(int i=0;i<cnt;i++) {
        if(mod[(cnt-i)-1] != 0 ) cout << mod[(cnt-i)-1];
    }
    return 0;
}

