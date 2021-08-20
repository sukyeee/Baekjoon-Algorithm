//11576
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define SIZE 1000001

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int A,B,m;
    int num[SIZE];
    int mod[SIZE];
    int decimal = 0;
    
    cin>> A >> B;
    cin >> m;
    for(int i=0;i<m;i++)cin>>num[i];
    
    for(int i=0;i<m;i++){
        decimal += pow(A,i)*num[m-i-1];
    }
    int j=0;
    while(decimal >= B){

        mod[j] = decimal%B;
        decimal = decimal/B;
        j++;
    }
    cout << decimal << " ";
    for(int i=j-1;i>=0;i--) cout << mod[i] << " ";
    
    return 0;
}



