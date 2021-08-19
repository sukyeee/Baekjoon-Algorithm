//2745
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int B;
    string N;
    cin >> N >> B;
    int leng= N.length();
    int trans[SIZE];
    int num=0;
    
    for(int i=0;i<36;i++){
        if(N[i] >= '0' && N[i] <= '9') trans[leng-i-1] = N[i]-'0';
        else if (N[i] >= 'A' && N[i] <= 'Z') trans[leng-i-1] = N[i]-55;
    }
    
    for(int i=0;i<leng;i++){
        num += pow(B, i)* trans[i];
    }
    
    cout << num;
    
    return 0;
}

