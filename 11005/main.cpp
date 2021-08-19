//11005
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N,B;
    cin >> N >> B;
    int mod[SIZE];
    char alphabet[36];
    
    for(int i=0;i<10;i++)alphabet[i] = '0'+i;
    for(int i=0;i<26;i++ )alphabet[i+10] = 'A'+i;
    
    int j=0;
    while( N >= B ){
        mod[j] = N%B;
        N = N / B;
        j++;
    }
    cout<<alphabet[N];
    for(int i=j-1;i>=0;i--)cout<<alphabet[mod[i]];
    
    return 0;
}

