//2225
#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n, k;
    long long sum[201][201];
    
    cin >> n >> k ;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=k;j++){
            sum[i][j] = 1;
        
        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            sum[i][j] = (sum[i-1][j] + sum[i][j-1]) % 1000000000;
        }
    }
    
    cout << (sum[n][k])%1000000000;
    
    
    return 0;
}

