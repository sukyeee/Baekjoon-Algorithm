//11656
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string input;
    cin>>input;
    string arr[input.length()];

    //접미사 저장
    for(int i=0;i<input.length();i++){
        for(int j=i;j<input.length();j++){
            arr[i] += input[j];
        }
    }
    sort(arr, arr+input.length());
    
    for(int i=0;i<input.length();i++) cout << arr[i] << "\n";
    return 0;
}
