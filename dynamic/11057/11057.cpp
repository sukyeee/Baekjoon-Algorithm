//11057
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N;
    long long up[1010][11];
    for(int i=1;i<=10;i++) up[1][i] = i;

    cin >> N; //N=3 부터 55+45+36+28+21+15+10+6+3+1 .... 반복
    for(int i=2;i<=1001;i++){
        for(int j=1;j<=10;j++){
            up[i][j] = (up[i][j-1] + up[i-1][j])%10007;
        }
    }
    
    cout << (up[N][10])%10007;
    
    return 0;
}

