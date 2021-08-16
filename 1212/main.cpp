//1212
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    string num;
    cin>>num;
    string result;
    
    for(int i=0;i<num.size();i++){
        
        if(i==0 && num[i]-'0' <=3 ){
            if(num[i]-'0'>=2) cout << (num[i]-'0')/2 << (num[i]-'0')%2;
            else if(num[i]-'0'==1) cout << "1";
            else if(num[i]-'0'==0) cout<< "0";
        }
        
        else if(num[i]-'0'>=4) cout << (num[i]-'0')/4 << ((num[i]-'0')%4)/2 << ((num[i]-'0')%4)%2;
        else if(num[i]-'0'>=2) cout << "0" << (num[i]-'0')/2 << (num[i]-'0')%2;
        else if(num[i]-'0'==1) cout << "001";
        else if(num[i]-'0'==0) cout << "000";
      
    }
    
   
    return 0;
}

