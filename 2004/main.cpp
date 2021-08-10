//2004
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n,m;
    cin>> n >> m;
    long long five_n=0, five_m=0,five_nm=0, two_n=0, two_m=0, two_nm=0;
    long long five=0, two=0;
    
    
    for(long long i=5; i<=n; i*=5){
        five_n += n/i;
    }
    for(long long i=5; i<=m; i*=5){
        five_m += m/i;
    }
    for(long long i=5; i<=(n-m) ; i*=5){
        five_nm += (n-m)/i;
    }
    
    for(long long i=2; i<=n; i*=2){
        two_n += n/i;
    }
    for(long long i=2; i<=m; i*=2){
        two_m += m/i;
    }
    for(long long i=2; i<=(n-m); i*=2){
        two_nm += (n-m)/i;
    }
    
    
    five = five_n - five_m - five_nm;
    two = two_n - two_m - two_nm;
    
    if(five > two) cout << two;
    else cout << five;
    
    return 0;
}

