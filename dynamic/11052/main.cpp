//11052
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
    
    for(int i=1;i<=test;i++){
        cin >> num;
        p[i] = num;
    }
    dp[0]=0;
    dp[1]=p[1];
    
    for(int i=2;i<=test;i++){
        for(int j=1;j<=test;j++){ //카드 팩
            if(i >= j){
               if(dp[i] > dp[i-j]+p[j]) dp[i] = dp[i];
               else dp[i] = dp[i-j]+p[j];
            }

        }
        
    }
    cout<< dp[test];
   
    
    return 0;
}


