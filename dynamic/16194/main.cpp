//16194
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    
    int dp[SIZE];
    int num, test;
    
    cin >> test;
    int p[test+1];
    p[0]=0;
    for(int i=0;i<SIZE;i++)dp[i] = 0;
    for(int i=1;i<=test;i++){
        cin >> num;
        p[i] = num;
    }
    dp[0]=0;
    for(int i=1;i<=test;i++){
        for(int j=1;j<=test;j++){ //카드 팩
            if(i >= j){ //i = 선택하는 카드의 개수보다 j가 작아야 한다
               if(dp[i] == 0) dp[i] = p[i];
               if(dp[i]  > dp[i-j]+p[j]) dp[i] = dp[i-j]+p[j];
            }
        }
        
    }
    cout<< dp[test];
   
    
    return 0;
}


