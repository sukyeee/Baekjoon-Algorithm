//17103
#include <iostream>
#include <string>
using namespace std;
#define SIZE 1000000

int decimal[SIZE]; //소수

void Prime(){
    for(int i=2;i<=SIZE;i++)decimal[i]=1;
    
    for (int i = 2; i * i <= SIZE; i++)
        {
            if (decimal[i]) {
                for (int j = i * i; j <= SIZE; j += i)decimal[j] = 0;
            }
        }
}

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int flag[SIZE];
    int test, num;
    cin>>test;
    Prime();
    
    for(int t=0;t<test;t++){
        int cnt=0;
        for(int i=2;i<=SIZE;i++)flag[i]=0;
        
        cin>>num;
        for(int i=2;i<=num/2;i++){
            if(flag[i] ==0 && flag[num-i] == 0){
                if( decimal[i] == 1 && decimal[num-i] == 1 ){
                    flag[i] = 1;
                    flag[num-i] = 1;
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}

