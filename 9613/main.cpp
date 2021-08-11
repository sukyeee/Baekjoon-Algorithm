//9613
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool desc(int a, int b){
    return a>b;
}
int GCD(int a, int b){
    
    while(1){
        if(a%b == 0) break;
        else {
            int x = b;
            b = a%b;
            a = x;
        }
    }
    return b;
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int t, n, num[101];
    cin >> t;
 
    for(int z=0;z<t;z++){
        long long sum=0;
        cin >>n;
        for(int i=0;i<n;i++)cin>>num[i];
        
        sort(num, num+n, desc);  //내림차순 정렬
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum += GCD(num[i], num[j]);
            }
        }
        
        cout<<sum<<"\n";
    }
    
    return 0;
}

